
    // Factory function to create product objects
    function createProduct(name, price, serialNo) {
        return {
            name: name,
            price: price,
            serialNo: serialNo,
            rating: {
                stars: 4.3,
                count: 79
            },
            message: function print() {
                console.log('Message displayed in console');
            }
        };
    }

    // Creating product instances using the factory function
    const product1 = createProduct('Bread', '$43', 234);
    const product2 = createProduct('Soda', '$32', 242);

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
