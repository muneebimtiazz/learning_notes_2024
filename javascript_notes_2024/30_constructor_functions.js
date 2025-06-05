
// When an object is created using literal notation, properties are assigned with key-value pairs. Now, if you want to create another object with the same keys but different values, the concept of constructors becomes relevant in JavaScript objects. You can create a constructor function to define the structure of your objects.

    function Product(name, price, serialNo) {
        // Properties
        this.name = name;
        this.price = price;
        this.serialNo = serialNo;
        // Nested object
        this.rating = {
            stars: 4.3,
            count: 79
        };
        // Method
        this.message = () => console.log('Message displayed in console');
    }

    // Creating product instances using the constructor function
    const product1 = new Product('Bread', '$43', 234);
    const product2 = new Product('Soda', '$32', 242);

    // Accessing and printing properties of product1
    console.log("Product 1 Name:", product1.name);
    console.log("Product 1 Price:", product1.price);
    console.log("Product 1 Rating:", product1.rating);
    product1.message();

    // Accessing and printing properties of product2
    console.log("Product 2 Name:", product2.name);
    console.log("Product 2 Price:", product2.price);
    console.log("Product 2 Rating:", product2.rating);
    product2.message();
