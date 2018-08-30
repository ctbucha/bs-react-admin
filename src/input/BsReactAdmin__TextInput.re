[@bs.module "react-admin"]
external textInput : ReasonReact.reactClass = "TextInput";

[@bs.obj]
external makeProps :
  (
    ~className: string=?,
    ~input: 'a=?,
    ~isRequired: bool=?,
    ~label: string=?,
    ~meta: 'b=?,
    ~name: string=?,
    ~onBlur: 'c=?,
    ~onChange: 'd=?,
    ~onFocus: 'e=?,
    ~options: 'f=?,
    ~resource: string=?,
    ~source: string=?,
    ~type_: [@bs.as "type"] string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~className=?,
      ~input=?,
      ~isRequired=?,
      ~label=?,
      ~meta=?,
      ~name=?,
      ~onBlur=?,
      ~onChange=?,
      ~onFocus=?,
      ~options=?,
      ~resource=?,
      ~source=?,
      ~type_=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=textInput,
    ~props=
      makeProps(
        ~className?,
        ~input?,
        ~isRequired?,
        ~label?,
        ~meta?,
        ~name?,
        ~onBlur?,
        ~onChange?,
        ~onFocus?,
        ~options?,
        ~resource?,
        ~source?,
        ~type_?,
        (),
      ),
    children,
  );
