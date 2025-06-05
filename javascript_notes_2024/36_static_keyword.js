
    // Example # 1
    // Static properties and methods belong to the class itself, not instances.
    // Instance properties are specific to each object created from the class.
    class School {
        static name = "Yokosuka High School"; // Static property
        totalStudents = 556; // Instance property

        // Instance method to get the total number of students
        getTotalStudents() {
            return this.totalStudents;
        }

        // Static method to get the school name
        static getSchoolName() {
            return this.name;
        }
    }

    // Create an instance of the School class
    let s1 = new School();

    // Accessing static and instance properties/methods
    console.log(s1.name); // undefined, static property accessed via instance
    console.log(s1.totalStudents); // 556, instance property accessed via instance
    console.log(s1.getTotalStudents()); // 556, instance method called
    console.log(School.name); // "Yokosuka High School", static property accessed directly
    console.log(School.getSchoolName()); // "Yokosuka High School", static method called

    // Example # 2
    class Player {
        static totalPlayers = 0; // Static property

        constructor(name, shirt) {
            this.name = name; // Instance property
            this.shirt = shirt; // Instance property
            Player.totalPlayers += 1; // Increment the totalPlayers each time a new player is created
        }

        // Static method to get the total number of players
        static getTotalPlayers() {
            return this.totalPlayers;
        }

        // Instance method to display player details
        show() {
            console.log(`Name: ${this.name} | Shirt: ${this.shirt} | Total Players: ${Player.totalPlayers}`);
        }
    }

    // Creating instances of the Player class
    let p1 = new Player("Ronaldo", 7);
    let p2 = new Player("Messi", 10);
    let p3 = new Player("Beckham", 10);
    let p4 = new Player("Bruno", 1);
    let p5 = new Player("Garnacho", 47);

    // Chaining method calls using the show method
    p1.show().show().show().show().show(); // Chaining method calls on the same instance

    // Using forEach to call the show method on each player instance
    [p1, p2, p3, p4, p5].forEach(obj => obj.show());

    // Accessing static property and method of the Player class
    console.log(Player.totalPlayers); // 5, static property accessed directly
    console.log(Player.getTotalPlayers()); // 5, static method called

