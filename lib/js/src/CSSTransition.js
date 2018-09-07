// Generated by BUCKLESCRIPT VERSION 4.0.5, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var ReactTransitionGroup = require("react-transition-group");

function make($staropt$star, timeout, className, $staropt$star$1, $staropt$star$2, $staropt$star$3, $staropt$star$4, classNames, children) {
  var in_ = $staropt$star !== undefined ? $staropt$star : false;
  var mountOnEnter = $staropt$star$1 !== undefined ? $staropt$star$1 : false;
  var unmountOnExit = $staropt$star$2 !== undefined ? $staropt$star$2 : false;
  var appear = $staropt$star$3 !== undefined ? $staropt$star$3 : false;
  var exit = $staropt$star$4 !== undefined ? $staropt$star$4 : true;
  return ReasonReact.wrapJsForReason(ReactTransitionGroup.CSSTransition, {
              in: in_,
              timeout: timeout,
              classNames: classNames,
              className: className,
              mountOnEnter: mountOnEnter,
              unmountOnExit: unmountOnExit,
              appear: appear,
              exit: exit
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */