[@bs.module "react-admin"]
external textInput : ReasonReact.reactClass = "TextInput";

[@bs.deriving abstract]
type props('a, 'b, 'c, 'd, 'e, 'f) = {
  [@bs.optional]
  className: string,
  [@bs.optional]
  input: 'a,
  [@bs.optional]
  isRequired: bool,
  [@bs.optional]
  label: string,
  [@bs.optional]
  meta: 'b,
  [@bs.optional]
  name: string,
  [@bs.optional]
  onBlur: 'c,
  [@bs.optional]
  onChange: 'd,
  [@bs.optional]
  onFocus: 'e,
  [@bs.optional]
  options: 'f,
  [@bs.optional]
  resource: string,
  [@bs.optional]
  source: string,
  [@bs.optional] [@bs.as "type"]
  type_: string,
};

/*
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
     ~type_: string=?,
     unit
   ) =>
   _ =
   "";
 */

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
      props(
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
