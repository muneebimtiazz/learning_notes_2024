// diff b/w let or var
for (let i = 0; i < 3; i += 1) {}
console.log(i); //ReferenceError

for (var i = 0; i < 3; i += 1) {}
console.log(i);

// variable scope=where a variable is accessible
// let=variable are limited to block scope{}
// var=varible are limited to a function(){}
// globel variable=this variable is declared outside any function
// globel var will change browser window properties

var name = "my name is muneeb"; //This creates a global variable and changes the window property
console.log(window);
