
    // used [] for array destructuring
    // used {} for object destructuring

    // Basic array destructuring
    const numbers = [1, 2, 3, 4, 5];
    const [first, second, third] = numbers;
    console.log(first); // Output: 1
    console.log(second); // Output: 2
    console.log(third); // Output: 3

    // Skipping elements
    const [, , , fourth, fifth] = numbers;
    console.log(fourth); // Output: 4
    console.log(fifth); // Output: 5

    // Rest parameter in array destructuring
    const [head, ...rest] = numbers;
    console.log(head); // Output: 1
    console.log(rest); // Output: [2, 3, 4, 5]

    // Default values
    const [x, y, z = 0] = numbers;
    console.log(x); // Output: 1
    console.log(y); // Output: 2
    console.log(z); // Output: 0 (default value used)

    // Swapping variables
    let a = 10, b = 20;
//destructing // array
    [a, b] = [b, a];
    console.log(a); // Output: 20
    console.log(b); // Output: 10

    // Nested array destructuring
    const nestedArray = [1, [2, 3], 4];
    const [m, [n, o], p] = nestedArray;
    console.log(m); // Output: 1
    console.log(n); // Output: 2
    console.log(o); // Output: 3
    console.log(p); // Output: 4

