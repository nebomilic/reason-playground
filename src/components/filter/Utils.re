let getUniqueString = () => Js.Date.toISOString(Js.Date.make());

// filtering array is tricky bcs array have fixed size in reason ml
// therefore like here https://2ality.com/2018/01/lists-arrays-reasonml.html#filtering-arrays
let filterArray = (~f, arr) =>
  arr |> ArrayLabels.to_list |> ListLabels.filter(~f) |> ArrayLabels.of_list;