//Example #1
// creates the new array with all elements that pass the test provided by a function
let ages = [10, 15, 20, 25, 30, 35];

let passedAges = ages.filter(check);
//                      complusory optional optional
// here arguments are (element,index,array)
function check(age) {
  if (age >= 18) {
    return age;
  }
}

//Example #2
// remove an element using index from an array
let arr = ["ali", "abdul", "babar", "jehngir"];
let indexToDelete = 2;

// there is no need for element in this case so we can skip that as well like _
let rem = arr.filter((name, index) => {
  return index !== indexToDelete;
});

console.log(rem);
