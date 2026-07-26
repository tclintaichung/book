import promptSync from 'prompt-sync';
const prompt = promptSync();

function main() {
  	let cmd = "";
  	let new_cmd = "";
  	let regExp = /[A-Za-z]/;
  	cmd = prompt("Enter string: ");
  	console.log("First character is alphabetic: " + regExp.test(cmd[0]));
  	new_cmd = cmd[0].toUpperCase();
  	new_cmd += cmd.slice(1, cmd.length);
  	console.log(new_cmd);
  	return 0;
}
main();