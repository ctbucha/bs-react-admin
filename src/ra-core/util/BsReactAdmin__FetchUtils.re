[@bs.deriving abstract]
type user = {
  authentication: string,
  token: string,
};

[@bs.deriving abstract]
type options = {
  [@bs.optional]
  headers: Fetch.Headers.t,
  [@bs.optional]
  body: Fetch.Body.t,
  [@bs.optional]
  user,
  [@bs.optional] [@bs.as "method"]
  method_: string,
};

type util;

type httpClient = (string, options) => Js.Promise.t(Js.Json.t);

[@bs.module "react-admin"] external fetchUtils : util = "";
[@bs.send]
external fetchJson : (util, string, options) => Js.Promise.t(Js.Json.t) = "";

let fetchJson = (url, options) => fetchJson(fetchUtils, url, options);
