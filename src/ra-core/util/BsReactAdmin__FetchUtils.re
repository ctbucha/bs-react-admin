type util = {
  .
  [@bs.meth]
  "fetchJson":
    [@bs.uncurry] (
      (string, Js.Dict.t(string)) => Js.Promise.t(Js.Dict.t(string))
    ),
};

[@bs.module "react-admin"] external fetchUtils : util = "";

let fetchJson = fetchUtils##fetchJson;
