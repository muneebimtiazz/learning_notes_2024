
// variable names are case sensetive mars or MARS are two different variables. 
// variable name must contain only letters,digits,symbols,underscore_ .
// first character must not be a digit.
// To catch and hold values, JavaScript provides a thing called a binding, or variable.
// The = operator can be used at any time on existing bindings to disconnect them from their current value and have them point to a new one.


let x = 5;  // x is initially bound to the value 5
x = 10;  // Now, x is reassigned and bound to the value 10

// inilization & declaration same line.
let myName="muneeb",age=22,city="Lahore";

// We can also change it as many times.
let message="i love myself";
message="i love you"; // value changed
console.log(message);

// We can also declare two variables and copy data from one into the other.
let message_2="i love coding";
message=message_2;
console.log(message);
console.log(message_2);

// declaring twice triggers an error.
/* let anime="attack on titan";
let anime="promised neverland";
*/

// inilization & declaration of a constant (unchanging) variable.
const myDateOFBirth="15.01.2002";
// myDateOFBirth="20.08.2002"; // error

// generally declare variable name with uppercase and underscore when value is assign at compile time using const.
// generally declare variable name with lowercase variable name when value is assign at runtime time using const,
const FAV_COLOR="black";  // compile time
const favcolor=prompt("your fav color:"); // runtime

// DOCUMENT LINK:https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Lexical_grammar#keywords
