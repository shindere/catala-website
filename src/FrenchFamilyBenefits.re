let url = "examples/french-family-benefits";

let family_benefits: string = [%bs.raw
  {|require("../assets/allocations_familiales.html")|}
];

[@react.component]
let make = () => {
  <div className="" dangerouslySetInnerHTML={"__html": family_benefits} />;
};
