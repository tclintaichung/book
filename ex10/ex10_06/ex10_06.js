function main() {
  const postOfficeQueue = [];
  postOfficeQueue.push(303);
  postOfficeQueue.push(304);
  postOfficeQueue.push(305);
  postOfficeQueue.push(306);
  postOfficeQueue.push(307);

  while (postOfficeQueue.length > 0) {
    console.log(postOfficeQueue.shift() + " is being served");
    console.log("Number in line is now: " + postOfficeQueue.length);
  }
  return 0; 
}
main();