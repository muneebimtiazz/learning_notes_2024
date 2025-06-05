
    let watchlist={
        anime:'',
        movie:'',
        series:''
    }

    // let anime=watchlist.anime;
    // let movie=watchlist.movie;
    // let series=watchlist.series;
//instead equilent
    let {anime , movie ,series }= watchlist;


    // Basic object destructuring
    const person = { name: 'Alice', age: 30 };
    const { name, age } = person;
    console.log(name); // Output: Alice
    console.log(age); // Output: 30

    // Renaming variables
    const { name: fullName, age: years } = { name: 'Bob', age: 25 };
    console.log(fullName); // Output: Bob
    console.log(years); // Output: 25

    // Default values
    const { name: userName, age: userAge = 30 } = { name: 'Charlie' };
    console.log(userName); // Output: Charlie
    console.log(userAge); // Output: 30

    // Nested object destructuring
    const { name: personName, address: { city, country } } = { name: 'David', address: { city: 'New York', country: 'USA' } };
    console.log(personName); // Output: David
    console.log(city); // Output: New York
    console.log(country); // Output: USA

    // Rest parameter in object destructuring
    const { name: fullName2, ...otherDetails } = { name: 'Ella', age: 35, email: 'ella@example.com' };
    console.log(fullName2); // Output: Ella
    console.log(otherDetails); // Output: { age: 35, email: 'ella@example.com' }

    // Destructuring parameters in functions
    const { name: personName2, age: personAge } = { name: 'Frank', age: 40 };
    function printDetails({ name, age }) {
        console.log(`Name: ${name}, Age: ${age}`);
    }
    printDetails({ name: personName2, age: personAge }); // Output: Name: Frank, Age: 40

    // Combining object and array destructuring
    const { user, items: [firstItem, secondItem] } = { user: 'John', items: ['Apple', 'Banana'] };
    console.log(user); // Output: John
    console.log(firstItem); // Output: Apple
    console.log(secondItem); // Output: Banana
