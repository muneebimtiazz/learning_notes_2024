
    const myPromise = new Promise((resolve, reject) => {
        setTimeout(() => {
            const randomNumber = Math.random();
            if (randomNumber < 0.5) {
                // Resolve the promise with the result if successful
                resolve(randomNumber);
            } else {
                // Reject the promise with an error message if there's an error
                reject("Error: Random number is greater than or equal to 0.5");
            }
        }, 2000);
    });

    // Handling the promise resolution
    myPromise.then((result) => {
        // This function is called when the promise is resolved successfully
        console.log("Success:", result);
    });

    // Handling the promise rejection
    myPromise.catch((error) => {
        // This function is called when the promise is rejected or an error occurs
        console.error("Error:", error);
    });

