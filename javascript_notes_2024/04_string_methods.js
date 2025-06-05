// string methods
// string properities and methods
let userName="muneeb imtiaz";
let phoneNumber="123-456-7890";
console.log(userName.length);
console.log(userName.charAt(0)); 
console.log(userName.indexOf("i")); 
console.log(userName.lastIndexOf("i")); 
console.log(userName.substring("i")); 
console.log(userName.toUpperCase());
console.log(userName.toLowerCase());
console.log(phoneNumber.replaceAll("-","$"));
console.log(phoneNumber.repeat(4)); //method returns a string with a number of copies of a string.

// slicing a string
let fullName="muneeb imtiaz"
let fname;
let lname;
fname=fullName.slice(0,6) //Slice out a portion of a string from position 0 to position 6:
lname=fullName.slice(7,13) //Slice out a portion of a string from position 7 to position 13:
console.log(fname);
console.log(lname);

// string concat
let text1 = "Hello";
let text2 = "World";
let text3 = text1.concat(" ", text2);

// string trim
let wide = "      Hello World!      ";
wide = wide.trim(); //The trim() method removes whitespace from both sides of a string
console.log(wide);

//method chaining
console.log(userName.charAt(2).toUpperCase())


// https://www.w3schools.com/js/js_string_methods.asp
// https://www.w3schools.com/js/js_number_methods.asp
