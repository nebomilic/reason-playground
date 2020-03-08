[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(FilterReducer.reducer, FilterReducer.initialState);

  <FilterProvider value=(state, dispatch)> <FilterWidget /> </FilterProvider>;
};