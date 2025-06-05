
// the spread operator performs the opposite rest parameters by taking an iterable, like an array or string, and expanding it into individual elements. It is akin to unpacking, allowing you to pass elements of an array as separate arguments to a function or create new arrays or objects by combining the elements of existing ones.

    // Example 1:
    let prices = ["$25", "$55", "$12", "$45", "$9"];
    console.log("Example 1:", ...prices);

    // Example 2: 
    let numbers = [11, 35, 79, 56, 34, 67];
    console.log("Example 2 (Before):", Math.max(numbers));  // NaN
    console.log("Example 2 (After):", Math.max(...numbers));

    // Example 3: Adding elements of an existing array into a new array
    let class1 = ["eren", "levi", "mikasa"];
    let class2 = ["connie", "erwin", "armin", ...class1];
    console.log("Example 3:", class2);
    console.log("Example 3:", ...class2);

    // Example 4: Passing elements of the array as arguments to a function
    let args = [1, 2, 3, 4, 5];
    function sum(a, b, c) {
        return a + b + c;
    }
    console.log("Example 4:", sum(...args));

    // Example 5: Copying arrays
    let copiedClass = [...class1];
    console.log("Example 5:", copiedClass);

    // Example 6: Concatenating arrays
    class1 = [...class1, "hello to my", ...copiedClass];
    console.log("Example 6:", class1);

