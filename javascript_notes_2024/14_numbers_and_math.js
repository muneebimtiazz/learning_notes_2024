// calculations withs floats are sometime inaccurate when working with money,,,first convert the amount into cents and convert back to dollars
console.log(5 + 5);

// basketball $20.95----1
// shirt $7.99
// toaster $18.99
// plate $20.67
// sock $10.90----------2

// order summary
// item(3):		        $42.75
// shipping&handling:	$4.99

// total before tax: 	$47.74
// estimated tax(10%): 	$4.77

// order total:		    $52.51

console.log(20.95 + 10.9 * 2 + 4.99 + 4.77); //52.510000000000005 instead of 52.51
// 1$=100cents
// $20.95=2095cents
// $10.90=1090cents
console.log((2095 + 1090 * 2 + 499 + 477) / 100);

console.log("");
console.log("order summary");
console.log("item(" + (1 + 1 + 1) + "):$" + (2095 + 1090 * 2) / 100);
console.log("shipping&handling:$" + 499 / 100);

console.log("total before tax:$" + (2095 + 1090 * 2 + 499) / 100);
console.log("estimated tax(10%):$" + 499 / 100);
console.log("");
console.log("order total:$" + (2095 + 1090 * 2 + 499 + 477) / 100);

Math.random();
// if you wanted numbers between 0 and 10, you would multiply Math.random() by 10
Math.random() * 10;
// rounding down
Math.floor(3.7463463);
Math.floor(Math.random() * 4); //could be 0, 1, 2, or 3

// Math Methods
let x = 5.6;
console.log(Math.round(x)); //returns x rounded to its nearest integer
console.log(Math.ceil(x)); //returns x rounded up to its nearest integer
console.log(Math.floor(x)); //returns x rounded down to its nearest integer
console.log(Math.trunc(x)); //returns the integer part of x (new in ES6)
console.log(Math.sign(x)); //returns if x is negative, null or positive:
console.log(Math.pow(8, 2));

//https://www.w3schools.com/js/js_math.asp
