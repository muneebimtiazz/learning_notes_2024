
    class Employee {
        constructor(name, age, dateOfJoining) {
            this.name = name;
            this.age = age;
            this.dateOfJoining = dateOfJoining;
        }
        experience() {
            console.log(`Employee working with our company since ${this.dateOfJoining}.`);
        }
        showDetails() {
            console.log(`Name: ${this.name} | Age: ${this.age} | Date of Joining: ${this.dateOfJoining}`);
        }
    }

    class Manager extends Employee {
        constructor(name, age, dateOfJoining, post, salary) {
            // Call the constructor of the parent class using super
            super(name, age, dateOfJoining);
            this.post = post;
            this.salary = salary;
        }
        showDetails() {
            // Call the showDetails method of the parent class using super
            super.showDetails();
            console.log(`Post: ${this.post} | Yearly Salary: ${this.salary}`);
        }
    }

    let m1 = new Manager("Jason", 45, "1993-05-17", "CEO", "1.1M");
    m1.showDetails(); // Call the overridden showDetails method of the Manager class

// The super keyword in JavaScript is used within subclasses to refer to and access elements from their parent classes. It primarily allows subclasses to call the constructor of the parent class (super()), invoke parent class methods (super.method()), and access parent class properties (super.property)
