type httpClient;
type raDataJsonServer;

[@bs.module "ra-data-json-server"]
external getRaDataJsonServer :
  (~apiUrl: string, ~httpClient: httpClient=?, unit) => raDataJsonServer =
  "default";
