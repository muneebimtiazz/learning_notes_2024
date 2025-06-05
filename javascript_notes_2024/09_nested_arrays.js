
// Example 1: Nested Arrays
// Each index of the main array contains another array or value.
let dinosaursAndNumbers = [3, "dinosaurs", ["triceratops", "stegosaurus", 3627.5], 10];
dinosaursAndNumbers[2];  // Accessing the nested array: ["triceratops", "stegosaurus", 3627.5]
dinosaursAndNumbers[2][0];  // Accessing a value within the nested array: "triceratops"

// Example 1: 2D Array for TV Shows
// Each array represents a category of TV shows: anime, movies, and series.
let anime = ["AOT", "Naruto", "One Piece"];
let movies = ["#Alive", "Batman vs Superman", "Inception"];
let series = ["TWD", "GoT", "Vikings"];

// Way 1: Using nested arrays to group TV shows by category
let tvShows = [anime, movies, series];
for (let category of tvShows) {
    for (let show of category) {
        console.log(show);
    }
}

// Way 2: Using nested loops to iterate through the 2D array
for (let i = 0; i < tvShows.length; i++) {
    for (let j = 0; j < tvShows[i].length; j++) {
        console.log(tvShows[i][j]);
    }
}

// Example 2: Combining Arrays
// Each array contains different types of elements.
let numbers = [1, 2, 3, 4, 5, 6];
let alphabets = ["a", "b", "c", "d", "e", "f"];
let characters = ["!", "@", "#", "$", "%", "^", "&"];

// Way 1: Combining all arrays into a single 2D array
let combinedArray = [numbers, alphabets, characters];
for (let array of combinedArray) {
    for (let element of array) {
        console.log(element);
    }
}

// Way 2: Using nested loops to iterate through the combined array
for (let i = 0; i < combinedArray.length; i++) {
    for (let j = 0; j < combinedArray[i].length; j++) {
        console.log(combinedArray[i][j]);
    }
}
