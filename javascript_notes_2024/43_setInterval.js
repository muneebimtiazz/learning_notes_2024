
// setInterval executes a function repeatedly, with the time interval specified between each execution
// To stop the repeated execution of a function initiated by setInterval, you use the clearInterval

    // Example 1: Basic setInterval
    console.log("Script begins");
    function greet() {
        console.log("Hello, world!");
    }
    let intervalId = setInterval(greet, 2000);
    console.log("Script ends");

    // Example 2: Using clearInterval to stop setInterval
    let count = 0;
    function increaseCount() {
        count++;
        console.log("Count:", count);
        if (count >= 5) {
            clearInterval(intervalId);
            console.log("Interval stopped.");
        }
    }
    console.log("Counting starts:");
    let intervalId2 = setInterval(increaseCount, 1000);
