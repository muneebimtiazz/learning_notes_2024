
    //A JavaScript Set is a collection of unique values.Each value can only occur once in a Set.
    // Create a Set
    const letters=new Set();
    const numbers=new Set([1,3,5,7]); //// Pass an array of values

    // Add Values to the Set
    letters.add("a");
    letters.add("b");
    letters.add("c");
    letters.add("d");

    // Delete Values to the Set
    letters.delete("d");

    // List all elements in the letters set
    let text = "";
    for (const x of letters.values()) {
    text += x;
    }
    console.log(text);

    // List all elements in the number set
    let numText = "";
    for (const x of numbers.values()) {
    numText += x;
    }
    console.log(numText);

    //https://www.w3schools.com/js/js_sets.asp
