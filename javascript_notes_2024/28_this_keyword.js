
    // Example 1: Using 'this' in an object method
    const login = {
        email: "xyz@mail.com",
        userName: "xyz",
        password() {
            console.log(`${this.email} is protected with a password`);
        },
    };
    login.password(); // Output: xyz@mail.com is protected with a password

    // Example 2: 'this' with different objects
    const user = { name: "John" , greet: sayHi};
    const admin = { name: "Admin", greet: sayHi};
    function sayHi() {
        console.log(this.name);
    }
    user.greet(); // Output: John
    admin.greet(); // Output: Admin

    // Example 3: Arrow functions and 'this'
    let userWithArrow = {
        firstName: "Ilya",
        sayHi() {
            let arrow = () => console.log(this.firstName);
            arrow();
        }
    };
    userWithArrow.sayHi(); // Output: Ilya

    // Example 4: 'this' in a function without an object context
    let name = "coke";
    function sayMyName() {
        console.log(this.name);
    }
    sayMyName(); // Output: coke (in a browser, 'this' refers to the global object, which is 'window')
