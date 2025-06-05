
    //In JavaScript, a Map is a built-in object that allows you to store key-value pairs, where both the keys and values can be of any data type
    // Create a Map for fruits
    const fruits = new Map([
    ["apples", 500],
    ["bananas", 300],
    ["oranges", 200]
    ]);

    // Create a Map for vegetables
    const vegetables = new Map();

    // Setting map values for vegetables
    vegetables.set("potatos", 250);
    vegetables.set("carrots", 120);
    vegetables.set("onions", 200);
    vegetables.set("garlics", 250);
    
    // Deleting map values from vegetables 
    vegetables.delete("apples");

    // Output the Map objects to console
    console.log("Fruits Map:", fruits);
    console.log("Vegetables Map:", vegetables);

    

    //https://www.w3schools.com/js/js_maps.asp
