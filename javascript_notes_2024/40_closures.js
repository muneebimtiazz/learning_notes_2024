
// function defined inside another function
// inner function accesss (variables,scope) of outer function
// closures used in frameworks react vue angular
// by allowing closures they allow private variables and state maintenance


    // Example 1:
    function outer(){
        const message = "Hello";

        function inner(){
            console.log(message);
        }
        inner();
    }
    message = "Goodbye"; // out of scope
    outer();

    // Example 2:
    function createCounter() {
        let count = 0;

        function increment() {
            count++;
            console.log(`Count increased to ${count}`);
        }
        function getCount() {
            return count;
        }
        return {increment, getCount};
    }

    const counter = createCounter();
    counter.increment();
    counter.increment();
    counter.increment();
    console.log(`Current count: ${counter.getCount()}`);

    // Example 3:
    function createGame(){
        let score = 0;

        function increaseScore(points){
            score += points;
            console.log(`+${points}pts`);
        }
        function decreaseScore(points){
            score -= points;
            console.log(`-${points}pts`);
        }
        function getScore(){
            return score;
        }
        return {increaseScore, decreaseScore, getScore};
    }

    const game = createGame();
    game.increaseScore(5);
    game.increaseScore(6);
    game.decreaseScore(3);
    console.log(`The final score is ${game.getScore()}pts`);
