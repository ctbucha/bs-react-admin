[@bs.deriving abstract]
type user = {
  authentication: string,
  token: string,
};

[@bs.deriving abstract]
type options = {
  [@bs.optional]
  headers: Js.Dict.t(string),
  [@bs.optional]
  body: string,
  [@bs.optional]
  user,
  [@bs.optional] [@bs.as "method"]
  method_: string,
};

type util;

type httpClient = (string, options) => Js.Promise.t(Js.Json.t);

/*
 type util = {. "fetchJson": httpClient};
 */

[@bs.module "react-admin"] external fetchUtils : util = "";
[@bs.send] external fetchJson : (util, string, options) => Js.Promise.t(Js.Json.t) = "";

/*
 let fetchUtils = fetchUtils;
 */

let fetchJson = (url, options) => fetchJson(fetchUtils, url, options);
