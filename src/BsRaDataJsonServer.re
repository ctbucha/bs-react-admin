type httpClient('a) =
  (~url: string, ~params: Js.Json.t, ~urlCb: string, ~paramsCb: Js.Json.t) =>
  Js.Promise.t('a);

type dataProvider('a) =
  (~type_: string, ~resource: string, ~params: Js.Json.t) => Js.Promise.t('a);

%raw
"var RaDataJsonServer = require('ra-data-json-server')";
[@bs.val]
external getRaDataJsonServer :
  (~apiUrl: string, ~httpClient: httpClient('a)=?, unit) => dataProvider('a) =
  "RaDataJsonServer";
let getRaDataJsonServer = getRaDataJsonServer;
