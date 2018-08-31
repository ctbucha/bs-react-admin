type httpClient;
type dataProvider('a) =
  (~type_: string, ~resource: string, ~params: Js.Json.t) => Js.Promise.t('a);

%raw
"var RaDataJsonServer = require('ra-data-json-server')";
[@bs.val]
external getRaDataJsonServer :
  (~apiUrl: string, ~httpClient: httpClient=?, unit) => dataProvider('a) =
  "RaDataJsonServer";
let getRaDataJsonServer = getRaDataJsonServer;
