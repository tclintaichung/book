import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
    let number = 0;
    console.log("Enter a number to compute its factorial: ");
    number = prompt();
    let factorial = 1;
    for (let i = 1; i <= number; i++) {
        factorial *= i;
    }

    console.log("The factorial of " + number + " is " + factorial + ".");
    return 0;
}

main();