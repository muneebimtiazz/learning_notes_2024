
    class Employee {
        constructor(name, age, doj) {
            this.name = name;
            this.age = age;
            this.dateOfJoining = doj;
        }
        experience() {
            console.log(`Employee working with our company since ${this.dateOfJoining}.`);
        }
        showDetails() {
            console.log(`name:${this.name} age:${this.age} since:${this.dateOfJoining}`);
        }
    }

    class Manager extends Employee {
        constructor(name, age, doj, post, salary) {
            this.name = name;
            this.age = age;
            this.dateOfJoining = doj;
            this.post = post;
            this.salary = salary;
        }
        showDetails() {
            console.log(`name:${this.name} age:${this.age} since:${this.dateOfJoining} post:${this.post} YearlySalary:${this.salary}`)
        }
    }

    let mgr = new Manager("Jason", 66, 1993, "CEO", "1.1M")
    mgr.showDetails()
