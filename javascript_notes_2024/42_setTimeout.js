
    // Example 1: Basic setTimeout
    console.log("Script begins");
    setTimeout(() => {
        console.log("Hello, world!");
    }, 2000);
    console.log("Script ends");

    // Example 2: setTimeout with arrow function
    console.log("Script begins");
    setTimeout(() => {
        console.log("Hello, world!");
    }, 2000);
    console.log("Script ends");

    // Example 3: setTimeout with arguments
    setTimeout((time, to) => {
        console.log(time + ', ' + to);
    }, 1000, "3:28", "John");

    // Example 4: Display time every 3 seconds
    function showTime() {
        let dateTime = new Date();
        let time = dateTime.toLocaleTimeString();
        console.log(time);
        setTimeout(showTime, 3000);
    }
    console.log("Displaying time every 3 seconds:");
    showTime();

    // Example 5: Using clearTimeout to stop setTimeout
    let timerId = setTimeout(() => {
        console.log("This message won't be displayed because clearTimeout was called.");
    }, 2000);
    clearTimeout(timerId);
    console.log("setTimeout stopped.");

    // Example 6: setTimeout with arrow function
    setTimeout(() => {
        console.log("Arrow function with setTimeout");
    }, 1000);

