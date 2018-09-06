%raw
"var RaDataJsonServer = require('ra-data-json-server')";
[@bs.val]
external getRaDataJsonServer :
  (
    ~apiUrl: string,
    ~httpClient: (~url: string, ~params: Js.Dict.t(string)) =>
                 Js.Promise.t('a)
                   =?,
    unit
  ) =>
  BsReactAdmin__Admin.dataProvider =
  "RaDataJsonServer";
let getRaDataJsonServer = getRaDataJsonServer;
