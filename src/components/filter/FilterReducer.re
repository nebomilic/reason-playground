open FilterTypes;
open Utils;
// example reason react and context
let initialState = {filters: [||]};

let initContextValue: contextValue = (initialState, _ => ignore());
// create context
let context = React.createContext(initContextValue);
// create hook to access context
let useContext = () => React.useContext(context);

let reducer = (state, action) => {
  switch (action) {
  | AddFilter => {
      filters:
        Array.append(
          state.filters,
          [|{id: getUniqueString(), column: "", operator: "", value: ""}|],
        ),
    }
  | RemoveFilter(id) => {
      filters: filterArray(~f=item => item.id !== id, state.filters),
    }
  | ResetFilter => {filters: [||]}
  | ApplyFilter => {filters: state.filters}
  };
};