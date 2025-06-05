
    // Non-mutative operations are those that do not alter the original data structure (such as an array or an object) but instead return a new structure or value based on the operation.

    // map():
    const numbers = [1, 2, 3];
    const squared = numbers.map((num) => num * num);
    console.log(squared);
    console.log(numbers);

    // // filter():
    // const numbers = [1, 2, 3, 4];
    // const evenNumbers = numbers.filter((num) => num % 2 === 0);
    // console.log(evenNumbers);
    // console.log(numbers);

    // // reduce():
    // const numbers = [1, 2, 3];
    // const sum = numbers.reduce((acc, num) => acc + num, 0);
    // console.log(sum); 
    // console.log(numbers); 

    // // concat():
    // const arr1 = [1, 2];
    // const arr2 = [3, 4];
    // const combined = arr1.concat(arr2);
    // console.log(combined);
    // console.log(arr1); 

    // // slice():
    // const fruits = ["apple", "banana", "cherry"];
    // const sliced = fruits.slice(1, 3);
    // console.log(sliced); 
    // console.log(fruits); 

