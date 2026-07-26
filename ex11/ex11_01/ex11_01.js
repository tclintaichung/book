import promptSync from 'prompt-sync';
const prompt = promptSync();
function main() {
    let count_down_time;
    count_down_time = Number(prompt("Enter count down time in seconds: "));
    for (let i = count_down_time; i > 0; i--) {
        setTimeout(() => {
            console.log(`Time remaining (s): ${i}`);
        }, (count_down_time - i) * 1000);
    }
    setTimeout(() => {
        console.log('Time\'s up!');
    }, count_down_time * 1000);
}
main();
