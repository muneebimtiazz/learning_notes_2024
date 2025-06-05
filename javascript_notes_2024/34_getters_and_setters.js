
    class Employee {
        constructor(name, salary) {
            this.name = name;
            this.salary = salary;
        }
        // Getter
        get salary() {
            if (this.salary > 3500 && this.salary < 20000) {
                console.log("Salary incremented by 5%");
            } else if (this.salary < 3500 && this.salary > 0) {
                console.log("Salary incremented by 10%");
            } else {
                console.log("Enter a logical salary");
            }

            return `Name: ${this.name} | Old Salary: ${this.salary}`;
        }

        // Setter 
        set salary(value) {
            console.log("You are not allowed to change official accounts");
        }
    }

    // Creating instances of the Employee class
    let emp1 = new Employee("Mike", 4300);
    let emp2 = new Employee("John", 3200);

    // Attempting to set salary using the setter 
    emp1.salary = 6620;

    // Getting and logging salaries
    console.log(emp1.salary);
    console.log(emp2.salary);

    // Attempting to set salary again using the setter
    emp1.salary = 34234;

