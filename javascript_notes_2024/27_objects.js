    // Example 1: Creating an object using an object literal
    const product = {
        name: "bread",   // Property-value pair: property/key (always a string): value (can be any type)
        price: "$9"
    }

    console.log("Example 1:");
    console.log(product);
    console.log(product["name"]);  // Accessing values in the object with bracket notation
    console.log(product.price);  // Accessing values in the object with dot notation
    product.name = "honey";  // Changing property value
    product.weight = "300g";  // Adding a new property 
    delete product.weight;  // Deleting a property ~ The delete keyword deletes both the value of the property and the property itself.
    console.log(product);

    // Example 2: Creating an object with more complex structure
    const product2 = {
        name: "icecream",   
        price: "$15",
        ["serial-no"]: 337, // Bracket notation lets us use properties that don't work with dot notation
        rating: {           // Nested object
            stars: 4.3,
            count: 79
        },
        display: function message() {  // Functions inside objects are called methods
            console.log("Message displayed in console")
        }
    }

    console.log("\nExample 2:");
    console.log(product2.price);
    console.log(product2["serial-no"]);
    console.log(product2.rating.stars);  // Accessing a property of an object inside another object
    product2.display(); // Calling a method of the object
    console.log(typeof console);
    console.log(typeof console.log);

    // Example 3: Creating an object with the keyword "new"
    const person = new Object(); // Creating an empty object
    person.name = "John"; // Adding properties to the object
    person.age = 30;
    console.log("\nExample 3:");
    console.log(person);

    // Example 4: Defining an object constructor and creating objects of the constructed type
    function Car(make, model, year) {
        this.make = make;
        this.model = model;
        this.year = year;
    }

    const car1 = new Car("Toyota", "Camry", 2020);
    const car2 = new Car("Honda", "Accord", 2019);
    console.log("\nExample 4:");
    console.log(car1);
    console.log(car2);

    // Example 5: Creating an object using Object.create()
    const animal = Object.create(null); // Creating an object with no prototype
    animal.species = "Dog"; // Adding properties to the object
    animal.sound = "Bark";
    console.log("\nExample 5:");
    console.log(animal);

// ------------------------------------------------------------------------------------
// object iteration

    const person = {
        name: "Ali",
        age: 25,
        city: "Lahore"
    };

    for (const key in person) {
    console.log(key);           // name, age, city
    console.log(person[key]);   // Ali, 25, Lahore
    }


    const student = {
        name: "Sara",
        grades: {
            math: 90,
            english: 85
        }
    };

    console.log(student.grades.math);        
    console.log(student["grades"]["math"]);   

    const cartItems = {
        product1: { S: 2, M: 1 },
        product2: { L: 3 }
    };

    for (const product in cartItems) {
    console.log(product); // product1, product2
    console.log(cartItems[product]); // { S: 2, M: 1 }

    for (const size in cartItems[product]) {
        console.log(size);  // S, M, L
        console.log(cartItems[product][size]); // 2, 1, 3
    }
    }
