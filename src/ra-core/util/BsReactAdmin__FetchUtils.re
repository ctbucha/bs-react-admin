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

type httpClient = ((. string, options) => Js.Promise.t(Js.Json.t));

type util = {. "fetchJson": httpClient};

[@bs.module "react-admin"] external fetchUtils : util = "";

let fetchUtils = fetchUtils;
