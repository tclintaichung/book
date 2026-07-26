function main() {
    let now = new Date();
    let code = [0, 0, 0, 0, 0];
    let codeStr = '';
    code[0] = now.getFullYear() % 5 + 1;
    code[1] = (now.getMonth() + 1) % 5 + 1;
    code[2] = now.getDate() % 5 + 1;
    code[3] = now.getHours() % 5 + 1;
    code[4] = now.getMinutes() % 5 + 1;
    console.log("Access Code: ");
    codeStr = code.join('');
    console.log(codeStr);
    return 0;
}
main();
