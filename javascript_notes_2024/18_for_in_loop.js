
//The JavaScript for in statement loops through the properties of an Object
const person = {fname:"John", lname:"Doe", age:25};

let text = "";
for (let x in person) {
text += person[x];
}

//The JavaScript for in statement can also loop over the properties of an Array
const numbers = [45, 4, 9, 16, 25];

let txt = "";
for (let x in numbers) {
txt += numbers[x];
}
