
        // your code goes here
    const obj = {
        name: "muneeb",
        age: 22,
        skills: ["expressjs", "reactjs", "mongodb", "nodejs"],
        grades: {
            english: 63,
            maths: 98,
            physics: 67,
            programming: 99,
        }
    }
    console.log(obj.name);
    console.log(obj.age);
    console.log(obj.skills);

    // way#1
    let arr = obj.skills;
    console.log(arr.join(" ,"))
    // way#2
    const [s1, s2, s3, s4] = obj.skills
    console.log(s1)
    console.log(s2)
    console.log(s3)
    console.log(s4)
    //  way#3 
    arr.forEach((item) => {
        console.log(item)
    })
    // way#4 Creating a transformed version of the array.
    let ARR = arr.map((item) => {
        return "i love " + item
    })
    console.log(ARR)
    // way#5
    for (let i=0;i<arr.length;i++){
        console.log(arr[i]);
    }
    // way#6 
    for (const value of arr) {
    console.log(value);
    }

    console.log(obj.grades)
    // way#1
    console.log(Object.keys(obj.grades).join(" "));
    console.log(Object.values(obj.grades).join(" "));
    // way#2
    let grades=obj.grades;
    // Destructure the grades object with the correct property names
    const {english,maths,physics,programming}=grades;
    console.log(english)
    console.log(maths)
    console.log(physics)
    console.log(programming)
    // way#3
    for (const key in grades) {
    console.log(`${key}: ${grades[key]}`);
    }
    // way#4
    // Keys 
    const keys = Object.keys(obj.grades).map((key) => key.toUpperCase());
    console.log(keys); 
    // values
    const values = Object.values(obj.grades).map((value) => `${value}`);
    console.log(values); 
