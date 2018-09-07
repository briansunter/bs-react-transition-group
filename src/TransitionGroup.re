[@bs.module "react-transition-group"]
external transitionGroup: ReasonReact.reactClass = "TransitionGroup";
let make =
    (
      ~className=?, 
      ~component="div", 
      ~appear=false, 
      ~enter=false, 
      ~exit=false, 
      children
      ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=transitionGroup,
    ~props={
      "component": component,
      "className": className,
      "appear": appear,
      "enter": enter,
      "exit": exit,
    },
    children,
  );