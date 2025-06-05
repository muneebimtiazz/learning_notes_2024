let result;
// simple if else
if (a + b < 4) {
  result = "Below";
} else {
  result = "Over";
}

// ternary operator
result = a + b < 4 ? "Below" : "Over";
let age = prompt("age?", 18);

// else if
if (age < 3) {
  message = "Hi, baby!";
} else if (age < 18) {
  message = "Hello!";
} else if (age < 100) {
  message = "Greetings!";
} else {
  message = "What an unusual age!";
}


// logical use cases of ifelse 
let cartItem = {
  '123': { name: 'Shirt', quantity: 2 },
  '456': { name: 'Pants', quantity: 1 }
};
let itemID = '123';
if (cartItem[itemID]) {
  console.log('Item exists in the cart');
}

let cartItem2 = ['Apple', 'Banana', 'Orange'];
let itemID2 = 1;
if (cartItem2[itemID2]) {
  console.log('Item exists');
}

// In objects, cartItem[itemID] checks if a key exists.
// In arrays, it checks if an index exists and holds a truthy value.

