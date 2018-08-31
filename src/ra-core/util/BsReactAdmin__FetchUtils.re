type util = {
  .
  "fetchJson":
    (~url: string, ~options: Js.Dict.t(string)=?) =>
    Js.Promise.t(Js.Dict.t(string)),
};

[@bs.module "react-admin"] external fetchUtils : util = "";

/*
 [@bs.val]
 external fetchJson :
   (~url: string, ~options: Js.Dict.t(string)=?) =>
   Js.Promise.t(Js.Dict.t(string)) =
   "";
   */

let fetchJson = fetchUtils##fetchJson;
