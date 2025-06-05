

// executes a provided callback function once for each array item/value/element and creates a new array.
// The map() method creates a new array by performing a function on each array element.
// map() method should use a return statement inside the function
let diffNumbers=[10,15,20,25,30]; 

let diffSquares=diffNumbers.map(sqtName);
diffNumbers.forEach(printout);
diffSquares.forEach(printout);

function sqtName(value,index,array){
    return Math.pow(value,2);
}
function printout(value){
    console.log(value);
}

//diff b/w forEach or map
let names=["ali","rahul","joe"];
let capitalizedNames=names.forEach(string=>{
    return string.charAt(0).toUpperCase() + string.slice(1);
})

console.log(capitalizedNames)

// let names = ["ali", "rahul", "joe"];
// let capitalizedNames = names.map(string => {
//     return string.charAt(0).toUpperCase() + string.slice(1);
// });

// console.log(capitalizedNames); 
// -----------------------------------------------------------------------------
// let numbers=[1,3,5,7,9]

// let xx=numbers.forEach(item=>{
//     return item+1;
// });
// console.log(numbers)
// console.log(xx)

let numbers=[1,3,5,7,9]

let xx=numbers.map(item=>{
    return item+1;
});
console.log(numbers)
console.log(xx)


// example 2
let totalSales = [
{
    productName:"watch",
    price:199,
    sales:17
},
{
    productName:"phone",
    price:190,
    sales:7
},
{
    productName:"mouse",
    price:29,
    sales:27
}
]

let totalEarning=totalSales.map(value=>{
return value.price*value.sales;
})
console.log(totalEarning)

//     let totalSales = [
//         {
//         productName:"watch",
//         price:199,
//         sales:17
//     },{
//         productName:"phone",
//         price:190,
//         sales:7
//     },{
//         productName:"mouse",
//         price:29,
//         sales:27
//     }
// ]

// let totalEarning=totalSales.map(value=>({
//    product:value.productName,
//     total:value.price*value.sales}
// ))
// console.log(totalEarning)

