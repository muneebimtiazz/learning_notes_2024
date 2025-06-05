// Any expression can be a switch argument
let a = "1";
let b = 0;
switch (+a) {
  case b + 1:
    console.log("this runs, because +a is 1, exactly equals b+1");
    break;

  default:
    console.log("this doesn't run");
}

// grouping of cases
let c = 3;
switch (c) {
  case 4:
    console.log("Right!");
    break;

  case 3:
  case 5:
    console.log("Wrong!");
    console.log("Why don't you take a math class?");
    break;

  default:
    console.log("The result is strange. Really.");
}
