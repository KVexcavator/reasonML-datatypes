type scoreType = int;
type percentType = float;
type userId = int;

let person: userId = 60;

let calsPercent = (score: scoreType, max: scoreType): percentType => {
  float_of_int(score) /. float_of_int(max) *. 100.0;
};

let result = calsPercent(person, 75);
Js.log({j| Подделка результатов составляет $result |j});
