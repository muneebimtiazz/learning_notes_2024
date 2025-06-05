// // events
// // 1-inline event handling-->handling events in html code using attributes
// // 2-event handling --> handling events in script 
// // piority=script > inline html code
// // drawback:
// // if we apply multiple event handling on same element the latest created one will be use
// // can handle one event at a time on one element
// // 3-event listners

// node.event=()=>{
//     //handle here
// }

// btn.onclick=()=>{
//     console.log('button was clicked')
// }
// btn.ondbclick=()=>{
//     console.log('button was clicked twice')
// }

// example 1
// to do this we need to access our element 
// supose the element is a button 
// <button id="btn"></button>
// now in script tag select that button 
// let btn=document.getElementById("btn");

// btn.onclick=function

// example 2
// supose the element is a div 
// <div id="box"></div>
// now in script tag select that div 
// let box=document.querySelector("box");

// box.onmousehover=function


// event object-->special object that has all the details of the object
// node.event=(e)=>{

// }

// // event obj 
// btn.onclick=(e)=>{
//     console.log(e);
//     console.log(e.type);
//     console.log(e.target);
//     console.log(e.clientX,e.clientY);
// }

// // event listners
// on clicking both eventhandlers run

// btn.addEventListnerer("click",()=>{
//     console.log("button was clicked")
// })
// btn.addEventListnerer("click",()=>{
//     console.log("button was clicked- handler2 ")
// })


// to remove a eventlistener we need to pass the reference of that event 
// so first create that reference
// suppose i want to remove the handler2 event listners
// then;

// let handler-2=btn.addEventListnerer("click",()=>{
//     console.log("button was clicked- handler2 ")
// })
// now ;
// btn.removeEventListener("click",handler-2);


// https://developer.mozilla.org/en-US/docs/Web/Events
// https://javatpoint.com/javascript-events



// function List(){

//     let exercises=[
//     {name:"pushups" , reps : 100},
//     {name:"squats" , reps : 150},
//     {name:"pullups" , reps : 16},
//     {name:"bench press" , reps : 30},
//     {name:"bicep curls" , reps : 120}
// ]


//     // exercises.sort((a,b)=>a.name.localeCompare(b.name)) //alphabetical order
//     // exercises.sort((a,b)=>b.name.localeCompare(a.name)) //reverse order
//     exercises.sort((a,b)=>a.reps- b.reps) //numeric
//     // exercises.sort((a,b)=>b.reps- a.reps) //reverse numeric


    
//     let newExercises=exercises.map(obj=>{
//         return [obj.name,obj.reps]        
//     })

//     return (newExercises)
// }

// console.log(List());


// function thisisit(){
//     console.log("you click the image")
// }