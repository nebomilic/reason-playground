type action =
  | AddFilter
  | RemoveFilter(string)
  | ResetFilter
  | ApplyFilter;

type filter = {
  id: string,
  column: string,
  operator: string,
  value: string,
};

type state = {filters: array(filter)};
type dispatch = action => unit;
type contextValue = (state, dispatch);