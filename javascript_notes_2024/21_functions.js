
    // Function to calculate the Fibonacci sequence iteratively
    // function declaration/prototype
    function disp(n) {
        let a = 0, b = 1;
        for (let i = 0; i < n; i++) {
            console.log(a + " ");
            let temp = a;
            a = b;
            b = temp + b;
        }
    }

    // main function
    function main() {
        let terms = parseInt(prompt("Enter number of terms:"));

        if (terms > 0) {
            // call to function
            disp(terms);
        } else {
            console.log("Please enter a positive number.");
        }
    }

    // call main function
    main();
