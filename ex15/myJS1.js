const myModule = require('./myModule1.js');
myModule.onRuntimeInitialized = function () {
    const result = myModule._plus10(9);
    console.log(result);
}