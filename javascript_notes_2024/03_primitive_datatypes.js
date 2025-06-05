// JavaScript has different data types, primitive and non-primitive. There are seven primitivedata types, Number, String, Boolean, NULL, Undefined and Symbol and one non-primitive data type‘object’
// primitive/value types(copy by values)
let x = 10;
let y = x;
x = 30;
console.log(`x=${x}`, `y=${y}`);

// JavaScript Types are Dynamic
let message = "hello"; //string
message = 123456; //number

// 1_NUMBER
let n = 123;
n = 12.345;
// The number type represents both integer and floating point numbers.
// There are many operations for numbers, e.g. multiplication *, division / e.t.c.

// 2_BIGINT
const bigInt = 1234567890123456789012345678901234567890n; //A BigInt value is created by appending n to the end of an integer
// JavaScript BigInt is a new datatype (ES2020) that can be used to store integer values that are too big to be represented by a normal JavaScript Number.
let xx = BigInt("123456789012345678901234567890");

// 3_STRINGS
let str = "my favorite number is : 123";
str = "my favorite number is : 123";
str = `my favorite number is : ${n}`;

// 4_BOOLEANS
let year2024 = true;
let year2023 = false;

// 5_NULL
let age = null;
// In JavaScript, null is not a “reference to a non-existing object” or a “null pointer”.
// It’s just a special value which represents “nothing”, “empty” or “value unknown,

// 6_UNDEFINED
let year;
console.log(year);
// The meaning of undefined is “value is not assigned”.
// explicitly assign undefined to a variable.
let color = red;
color = undefined;
alert(color);

// 7_SYMBOLS
