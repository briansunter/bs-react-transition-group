type state = {start: bool};

type action =
  | Start
  | End;

let component = ReasonReact.reducerComponent("Example");

let make = (_children) => {
  ...component,
  initialState: () => {start: false},
  reducer: (action, state) =>
    switch (action) {
    | Start => ReasonReact.Update({...state, start: true})
    | End => ReasonReact.Update({...state, start:false})
    },
  render: self =>
  <div>
    <Transition timeout=300 in_=self.state.start>
    ...((animationState) =>
      (ReasonReact.string("AnimationState: " ++ Transition.stringOfState(animationState)))
    )
      </Transition>
    <button onClick=(_ => self.send(Start)) disabled={self.state.start}>
    (ReasonReact.string("Start Animation"))
    </button>
    <button onClick=(_ => self.send(End)) disabled= {! self.state.start}>
    (ReasonReact.string("End Animation"))
    </button>
    </div>
};
