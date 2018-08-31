type util = {
  .
  "fetchJson":
    (~url: string, ~options: Js.Dict.t(string)=?, unit) =>
    Js.Promise.t(Js.Dict.t(string)),
};

[@bs.module "react-admin"] external fetchUtils : util = "";

let fetchJson = fetchUtils##fetchJson;
