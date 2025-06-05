
let anime=["aot","fmab","jjba","mha"];
// access full array
console.log(anime);
// access an array element
console.log(anime[1]);
console.log(anime[-2]);  //negative index not work in js
// setting or changing element in a array
anime[3]="jk";
console.log(anime)
// converting array to a string
console.log(anime.toString());

// array methods()
anime.push("naruto"); //add element at the end of an array
anime.pop();    //remove element from the end of an array
anime.unshift("onepiece");  //add element at the beginning of the array
anime.shift(); //remove element from the beginning of the array
anime.length;  //length of the array
anime.indexOf("jjba");  //finding the index of an element in an array
// If the element whose position you ask for is not in the array,JavaScript returns -1.
// This is JavaScript’s way of saying “That doesn’t exist here,” while still returning a number
anime.includes("aot"); //Array.includes() allows to check for NaN values
anime.sort(); //only works for strings
anime.reverse(); //only works for strings

// merging arrays
let firstArray=['a','b','c','d'];
let secondArray=[1,2,3,4];
let thirdArray=['@','#','$','%'];
let combinedTwo=firstArray.concat(secondArray); //Merging Two Arrays
console.log(combinedTwo); 
let combinedThree=firstArray.concat(secondArray, thirdArray); //Merging Three Arrays
console.log(combinedThree)

let fruit=["apple","mango","orange","banana","strawberry"];
// looping array elements
for(let i=0;i<fruit.length;i+=1){
    console.log(fruit[i]);
}
for(let i of fruit){
    console.log(i);
}  
