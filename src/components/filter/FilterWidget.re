open FilterTypes;

let initialState = {filters: [||]};

[@react.component]
let make = () => {
  let (state, dispatch) = FilterReducer.useContext();

  <div
    style={ReactDOMRe.Style.make(
      ~display="flex",
      ~alignItems="center",
      ~justifyContent="space-between",
      ~flexDirection="column",
      (),
    )}>
    {ReasonReact.array(
       state.filters
       ->Belt.Array.mapWithIndex((_, filter) => <FilterItem filter />),
     )}
    <div>
      <button onClick={_ => dispatch(AddFilter)}>
        {React.string("Add")}
      </button>
      <button onClick={_ => dispatch(ResetFilter)}>
        {React.string("Reset")}
      </button>
      <button onClick={_ => dispatch(ApplyFilter)}>
        {React.string("Apply")}
      </button>
    </div>
  </div>;
};