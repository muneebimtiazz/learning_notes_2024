
    // Example 1: Arrow function for greetings
    let greetings = (visitor) => {
        message = `Greetings to you, ${visitor}!`;
        return message;
    }
    let print = greetings("Mike");
    console.log(print);

    // Example 2: Arrow function for adding numbers
    let add = (a, b) => a + b;
    console.log(add(5, 3)); // Output: 8

    // Example 3: Arrow function with implicit return
    let square = (x) => x * x;
    console.log(square(4)); // Output: 16

    // Example 4: Arrow function with no parameters
    let hello = () => "Hello!";
    console.log(hello()); // Output: Hello!

    // Example 5: Arrow function with multiple statements
    let getSum = (x, y) => {
        let sum = x + y;
        return sum;
    }
    console.log(getSum(10, 20)); // Output: 30

