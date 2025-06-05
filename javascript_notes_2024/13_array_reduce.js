// reduces an array to a single value
// The reduce() method works from left-to-right in the array.
// The reduce() method does not reduce the original array.
// Note that the function takes 4 arguments: (total,value,index,array).The callback function does not use the index and array parameters, so they can be omitted
let prices = [10, 15, 20, 55, 60];

let total = prices.reduce(checkout);
console.log(total);
//The reduce() method can accept an initial value:
let initialTotal = prices.reduce(checkout, 500);
console.log(initialTotal);

function checkout(total, value) {
  return total + value;
}
