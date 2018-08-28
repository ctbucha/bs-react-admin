type httpClient;
type raDataJsonServer;

[@bs.module]
external getRaDataJsonServer :
  (~apiUrl: string, ~httpClient: httpClient=?, unit) => raDataJsonServer =
  "ra-data-json-server";
