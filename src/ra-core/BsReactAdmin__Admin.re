[@bs.module "react-admin"] external admin : ReasonReact.reactClass = "Admin";

type dataProvider =
  (~type_: string, ~resource: string, ~params: Js.Dict.t(string)) => Js.Json.t;

[@bs.obj]
external makeProps :
  (
    ~appLayout: 'a=?,
    ~authProvider: 'b=?,
    ~catchAll: 'c=?,
    ~customSagas: 'd=?,
    ~customReducers: 'e=?,
    ~customRoutes: 'f=?,
    ~dashboard: 'g=?,
    ~dataProvider: dataProvider,
    ~history: 'h=?,
    ~i18nProvider: 'i=?,
    ~initialState: 'j=?,
    ~loading: 'k=?,
    ~locale: string=?,
    ~loginPage: 'l=?,
    ~logoutButton: 'm=?,
    ~menu: 'n=?,
    ~theme: 'o=?,
    ~title: 'p=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~appLayout=?,
      ~authProvider=?,
      ~catchAll=?,
      ~customSagas=?,
      ~customReducers=?,
      ~customRoutes=?,
      ~dashboard=?,
      ~dataProvider,
      ~history=?,
      ~i18nProvider=?,
      ~initialState=?,
      ~loading=?,
      ~locale=?,
      ~loginPage=?,
      ~logoutButton=?,
      ~menu=?,
      ~theme=?,
      ~title=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=admin,
    ~props=
      makeProps(
        ~appLayout?,
        ~authProvider?,
        ~catchAll?,
        ~customSagas?,
        ~customReducers?,
        ~customRoutes?,
        ~dashboard?,
        ~dataProvider,
        ~history?,
        ~i18nProvider?,
        ~initialState?,
        ~loading?,
        ~locale?,
        ~loginPage?,
        ~logoutButton?,
        ~menu?,
        ~theme?,
        ~title?,
        (),
      ),
    children,
  );
