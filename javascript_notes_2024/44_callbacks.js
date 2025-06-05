
    // Example 1: Basic callback function
    function greet(emojiCallback) {
        console.log("Hello!");
        emojiCallback(); // Invoke the callback function
    }
    function emoji() {
        console.log("👋");
    }
    
    // Example 2: Callback with parameters
    function calculate(callback, x, y) {
        let result = callback(x, y); 
        console.log("Result:", result);
    }
    function add(a, b) {
        return a + b;
    }
    function subtract(a, b) {
        return a - b;
    }

    // Example 3: Asynchronous operation with callback
    console.log("Start");
    function loginUser(email, password, callback) {
    setTimeout(() => {
        console.log("Now we have the data");
        callback({ userEmail: email });
    }, 5000);
}
    function handleLogin(user) {
        console.log("Logged in user:", user);
    }
    loginUser("devedf@goomail.com", 123456, handleLogin);
    console.log("Finish");

    // Example 4: Callback hell (nested callbacks)
    function stepOne(callback) {
        console.log("Step One");
        callback(stepTwo);
    }
    function stepTwo(callback) {
        console.log("Step Two");
        callback(stepThree);
    }
    function stepThree() {
        console.log("Step Three");
    }

    // Invoking the functions
    greet(emoji); // Example 1
    calculate(add, 5, 3); // Example 2
    calculate(subtract, 10, 4); // Example 2
    stepOne(stepTwo); // Example 4
