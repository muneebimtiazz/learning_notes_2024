
function List(){

    let exercises=[
    {name:"pushups" , reps : 100},
    {name:"squats" , reps : 150},
    {name:"pullups" , reps : 16},
    {name:"bench press" , reps : 30},
    {name:"bicep curls" , reps : 120}
]


    // exercises.sort((a,b)=>a.name.localeCompare(b.name)) //alphabetical order
    // exercises.sort((a,b)=>b.name.localeCompare(a.name)) //reverse order
    // exercises.sort((a,b)=>a.reps- b.reps) //numeric
    exercises.sort((a,b)=>b.reps- a.reps) //reverse numeric


    
    let newExercises=exercises.map(obj=>{
        return [obj.name,obj.reps]        
    })

    return (newExercises)
}

console.log(List());

