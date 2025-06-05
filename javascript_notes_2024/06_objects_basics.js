
// Object creation using the "object constructor"
let user = new Object();

// Object creation using the "object literal" notation
let user2 = {};

// Object with properties
let student = {
    name: "John",
    age: 30,
    "likes birds": "yes"
};

// Property Access
console.log("Name:", student.name);
console.log("Age:", student.age);
console.log("Likes Birds:", student["likes birds"]);

// Dynamic Property Access
let key = prompt("Enter the value you want to access:", "name");
console.log("Dynamic Access:", student[key]);

// Property Modification
student.name = "Abraham";
student["likes birds"] = "no";

// Property Deletion
delete student.age;
delete student["likes birds"];

// Computed Properties
let fruit = prompt("Which fruit to buy?", "apple");
let bag = {
    [fruit]: 5,
};
console.log("Fruit in Bag:", bag.apple);

// Property Existence Test
console.log("Does 'age' exist?", "age" in student); // true
console.log("Does 'blabla' exist?", "blabla" in student); // false

// Iterating Over Object Properties
for (let key in student) {
    console.log("Key:", key);
    console.log("Value:", student[key]);
}
