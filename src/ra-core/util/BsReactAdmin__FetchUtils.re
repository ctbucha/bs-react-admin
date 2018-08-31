[@bs.val] [@bs.scope ("react-admin", "fetchUtils")]
external fetchJson :
  (~url: string, ~options: Js.Dict.t(string)=?) => Js.Promise.t(_) =
  "";
