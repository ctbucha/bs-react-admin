[@bs.module "react-admin"] external list_ : ReasonReact.reactClass = "List";

type sort =
  Js.t(
    {
      .
      "field": string,
      "order": string,
    },
  );

[@bs.obj]
external makeProps :
  (
    ~actions: 'a=?,
    ~bulkActions: 'b=?,
    ~classes: 'c=?,
    ~className: string=?,
    ~filter: 'd=?,
    ~filterDefaultValues: 'e=?,
    ~filters: 'f=?,
    ~pagination: 'g=?,
    ~perPage: int=?,
    ~sort: sort=?,
    ~title: 'h=?,
    ~authProvider: 'i=?,
    ~hasCreate: bool=?,
    ~hasEdit: bool=?,
    ~hasList: bool=?,
    ~hasShow: bool=?,
    ~location: 'j=?,
    ~match: 'k=?,
    ~path: string=?,
    ~resource: string=?,
    ~theme: 'l=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~actions=?,
      ~bulkActions=?,
      ~classes=?,
      ~className=?,
      ~filter=?,
      ~filterDefaultValues=?,
      ~filters=?,
      ~pagination=?,
      ~perPage=?,
      ~sort=?,
      ~title=?,
      ~authProvider=?,
      ~hasCreate=?,
      ~hasEdit=?,
      ~hasList=?,
      ~hasShow=?,
      ~location=?,
      ~match=?,
      ~path=?,
      ~resource=?,
      ~theme=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=list_,
    ~props=
      makeProps(
        ~actions?,
        ~bulkActions?,
        ~classes?,
        ~className?,
        ~filter?,
        ~filterDefaultValues?,
        ~filters?,
        ~pagination?,
        ~perPage?,
        ~sort?,
        ~title?,
        ~authProvider?,
        ~hasCreate?,
        ~hasEdit?,
        ~hasList?,
        ~hasShow?,
        ~location?,
        ~match?,
        ~path?,
        ~resource?,
        ~theme?,
      ),
    children,
  );
