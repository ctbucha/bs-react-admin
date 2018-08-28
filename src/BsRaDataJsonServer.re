type httpClient;
type raDataJsonServer;

%raw
"var RaDataJsonServer = require('ra-data-json-server')";
[@bs.val]
external getRaDataJsonServer :
  (~apiUrl: string, ~httpClient: httpClient=?, unit) => raDataJsonServer =
  "RaDataJsonServer";
let getRaDataJsonServer = getRaDataJsonServer;
