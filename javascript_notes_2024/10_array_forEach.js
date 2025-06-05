
// The forEach() method is a higher-order array method in JavaScript that allows you to iterate over the elements of an array and execute a provided function once for each element. 
// Order matters(value,index,array)
// Note that the function takes 3 arguments: (value,index,array).The callback function does not use the index and array parameters, so they can be omitted
// The forEach() method does not return a new array; it simply iterates through the existing array and applies the provided function to each element.


let arr=["one" , "two" , "three" ,"four"];
arr.forEach(printt)

// argument 1-> item , argument 2-> index , argument 3-> array name
function printt(item,index,arr){
    console.log("arr["+index+"]="+item);
}

// we can also do it using arrow functions
// arr.forEach((item,index,arr)=>{
//     console.log("arr["+index+"]="+item);
// })

//example 1
let newARR=[10,20,30,40];

// newARR.forEach(item=>{
// 	console.log("arr["+"]="+item);
// })

let sum=0;
newARR.forEach(item=>{
    sum=sum+item;
})
console.log(sum);

//example 2
let diffNames=["bilal","rahul","mike"]; 
diffNames.forEach(capName);
diffNames.forEach(print);

function capName(element,index,array){
    array[index]=element.toUpperCase();
}
function printone(element){
    console.log(element);
}

//example 3
let diffNumbers=[2,3,4,5,6]; 

diffNumbers.forEach(sqtName);
diffNumbers.forEach(print);

function sqtName(value,index,array){
    array[index]=Math.pow(value,2);
}
function printout(value){
    console.log(value);
}

//example 4
let names=["ali","rahul","joe"];

names.forEach(string=>{
    console.log (string.charAt(0).toUpperCase() + string.slice(1));
})

names.forEach(value=>{
    console.log(value);
})

//example 5
let totalLetters = ["a", "b", "a", "e", "d", "a", "b", "f"];

let obj = {};

totalLetters.forEach(item => {
    if (obj[item]) {
        obj[item]++;
    } else {
        obj[item] = 1;
    }
});

console.log(obj); 
