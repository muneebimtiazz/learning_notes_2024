
    // Example 1: Simple class with methods
    class Employee {
        name;
        present() {
            console.log("This employee is available");
        }
        notPresent() {
            console.log("This employee is not available");
        }
    }

    // Creating instances of the Employee class
    let emp1 = new Employee();
    emp1.present(); // Output: This employee is available
    let emp2 = new Employee();
    emp2.notPresent(); // Output: This employee is not available


    // Example 2: Class with constructor and instance methods
    class EmployeeDetails {
        constructor(name, age, salary, doj) {
            this.name = name;
            this.age = age;
            this.salary = salary;
            this.doj = doj;
        }

        // Method to display employee details
        show() {
            console.log(`Name: ${this.name} | Age: ${this.age} | Salary: ${this.salary} | DOJ: ${this.doj}`);
        }
    }

    // Creating instances of the EmployeeDetails class
    let employee1 = new EmployeeDetails("John", 30, "$5500", 2014);
    let employee2 = new EmployeeDetails("Mike", 33, "$6000", 2013);

    // Displaying employee details
    employee1.show();
    employee2.show();


    // Example 3: Class with constructor, instance methods, getters, and conditional logic
    class Student {
        constructor(name, english, science, maths) {
            this.name = name;
            this.english = english;
            this.science = science;
            this.maths = maths;
        }

        // Method to display student information
        show() {
            console.log(`Student Name: ${this.name} | English Marks: ${this.english} | Science Marks: ${this.science} | Maths Marks: ${this.maths}`);
        }

        // Getter for calculating and returning total marks
        get totalMarks() {
            this.total = this.english + this.science + this.maths;
            return this.total;
        }

        // Getter for displaying total marks
        get showMarks() {
            console.log(`Total Marks: ${this.total}`);
        }

        // Getter for calculating and displaying grades based on percentage
        get grades() {
            this.percentage = Math.round((this.total / 300) * 100);
            console.log(`Percentage: ${this.percentage}%`);

            // Conditional logic to determine the grade
            if (this.percentage >= 90) {
                console.log("Grade A");
            } else if (this.percentage >= 80) {
                console.log("Grade B");
            } else if (this.percentage >= 70) {
                console.log("Grade C");
            } else if (this.percentage >= 60) {
                console.log("Grade D");
            } else {
                console.log("Grade F");
            }
        }
    }

    // Creating instances of the Student class
    let student1 = new Student("Muneeb", 67, 89, 91);
    let student2 = new Student("Ali", 37, 59, 81);

    // Displaying student information, calculating and displaying total marks, and determining grades
    student1.show();
    student1.totalMarks;
    student1.showMarks;
    student1.grades;

    student2.show();
    student2.totalMarks;
    student2.showMarks;
    student2.grades;

