const myModule = require('./myModule2.js');
myModule.onRuntimeInitialized = function () {
    let result = myModule.ccall('plus10', 'number', ['number'], [19])
    const plus10 = myModule.cwrap('plus10', 'number', 'number');
    console.log(result);
    result = plus10(9);
    console.log(result);
}