
    // A function expression is when a function definition is assigned directly to a variable.
    // The variable behaves like any other variable, but its value is a function definition,
    // and this variable can be used as a reference to the function.

    // Example 1: Function expression for greetings
    let greetings = function(visitor) {
        let message = `Greetings to you, ${visitor}!`;
        return message;
    };
    let print = greetings("Mike");
    console.log(print);

    // Example 2: Function expression with multiple parameters
    let calculate = function(a, b, operation) {
        if (operation === "add") {
            return a + b;
        } else if (operation === "subtract") {
            return a - b;
        } else if (operation === "multiply") {
            return a * b;
        } else if (operation === "divide") {
            return a / b;
        } else {
            return "Invalid operation";
        }
    };
    console.log(calculate(10, 5, "add")); // Output: 15
    console.log(calculate(10, 5, "subtract")); // Output: 5
    console.log(calculate(10, 5, "multiply")); // Output: 50
    console.log(calculate(10, 5, "divide")); // Output: 2
    console.log(calculate(10, 5, "exponent")); // Output: Invalid operation
