open FilterReducer;
open FilterTypes;
// based on https://dev.to/margaretkrutikova/reason-react-context-explained-in-action-5eki
// create provider
let make = React.Context.provider(context);

/** Tell bucklescript how to translate props into JS */
let makeProps = (~value: (state, dispatch), ~children, ()) => {
  "value": value,
  "children": children,
};