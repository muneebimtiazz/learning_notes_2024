
// Rest parameters allow a function to accept an indefinite number of arguments by using the three dots (...) followed by a parameter name, collecting the remaining arguments into an array. This is particularly useful when you want a function to handle any number of inputs without explicitly listing them
    // Rest parameters represent an indefinite number of parameters,
    // condense multiple elements into an array (packs arguments into an array).

    function sum(...numbers) {
        let total = 0;
        // Iterating through the array of numbers
        for (let num of numbers) {
            total += num;
        }
        return total;
    }

    // Calling the function with various arguments
    console.log(sum(1, 2, 3, 4, 5, 6, 7));
