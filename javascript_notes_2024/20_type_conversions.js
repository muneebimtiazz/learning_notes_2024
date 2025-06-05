
    // Automatic Type Conversion (Type Coercion):
    console.log(8*null) // → 0
    console.log("5"-1) // → 4
    console.log("5"+1) // → 51
    console.log("five"*2) // → NaN
    console.log(false==0) // → true

    let x=12
    let y=13.9
    console.log(x,typeof x)
    console.log(y,typeof y)
    let z=x+y
    console.log("sum:",z,typeof z)

    // User-Initiated Type Conversion (Explicit Type Conversion):
    // FOR STRING
    let str="123";
    console.log("type of input:",typeof(str));
    str=Number(str);
    console.log(str)
    console.log(typeof(str))
    str=Boolean(str);
    console.log(str)
    console.log(typeof(str))

    // FOR NUMBER
    let num=316;
    console.log("type of input:",typeof(num));
    num=String(num);
    console.log(num);
    console.log(typeof(num));
    num=Boolean(num);
    console.log(num);
    console.log(typeof(num));

    // FOR BOOLEAN
    let boolean=true;
    console.log("type of input:",typeof(boolean))
    boolean=Number(boolean);
    console.log(boolean)
    console.log(typeof(boolean))
    boolean=String(boolean);
    console.log(boolean)
    console.log(typeof(boolean))

    //https://www.w3schools.com/js/js_type_conversion.asp
