[@bs.module "react-admin"] external admin : ReasonReact.reactClass = "Admin";

type dataProvider;

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
    ~history: 'i=?,
    ~i18nProvider: 'j=?,
    ~initialState: 'k=?,
    ~loading: 'l=?,
    ~locale: string=?,
    ~loginPage: 'm=?,
    ~logoutButton: 'n=?,
    ~menu: 'o=?,
    ~theme: 'p=?,
    ~title: 'q=?,
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
