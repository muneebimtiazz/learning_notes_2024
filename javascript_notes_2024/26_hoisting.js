
    // Variable Hoisting:
    console.log(x); // Output: undefined
    var x = 5;
    // The code above is like:
    var x;
    console.log(x); // Output: undefined
    x = 5;

    // Function Hoisting:
    sayHello(); // Output: Hello!
    function sayHello() {
        console.log("Hello!");
    }
    // The code above is like:
    function sayHello() {
        console.log("Hello!");
    }
    sayHello();

    // Function hoisting doesn't work with function expressions:
    greet(); // Error: greet is not a function
    var greet = function() {
        console.log("Greetings!");
    }

    // Why use var instead of let in this code?
    // In JavaScript, var and let handle variable declaration differently. Variables with var are hoisted to the top of their function or global scope and can be accessed before they're declared. They also allow redeclaration within the same scope without error. In contrast, let variables are not hoisted and have block scope, limited to the code block they're declared in. They prevent accidental redeclaration within the same scope. While var may work in some cases, let offers clearer and safer variable handling, especially in modern JavaScript.
