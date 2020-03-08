open FilterTypes;

[@react.component]
let make = (~filter: filter, _) => {
  let (_, dispatch) = FilterReducer.useContext();
  <div
    style={ReactDOMRe.Style.make(
      ~display="flex",
      ~alignItems="center",
      ~justifyContent="space-between",
      (),
    )}>
    <input value={filter.column} />
    <input value={filter.operator} />
    <input value={filter.value} />
    <button
      onClick={_ => dispatch(RemoveFilter(filter.id))}
      style={ReactDOMRe.Style.make(~height="20px", ~padding="0px 5px", ())}>
      {React.string("-")}
    </button>
  </div>;
};