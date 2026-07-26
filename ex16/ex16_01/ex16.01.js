const colors = ["#FF0000", "#00FF00", "#0000FF", "#FFFF00", "#FFA500", "#FFFFFF"];
let coefA = undefined;
let coefB = undefined;
let coefC = undefined; 
let originX = undefined
let originY = undefined
const pointX = [];
const pointY = [];
let scale = 1;
let myCanvas = undefined;
let zoomIn = undefined;
let zoomOut = undefined;
let ctx = undefined;
let aInput = undefined;
let bInput = undefined;
let cInput = undefined;
document.addEventListener("DOMContentLoaded", function() {
    myCanvas = document.getElementById("myCanvas");
    zoomIn = document.getElementById("zoom-in");
    zoomOut = document.getElementById("zoom-out");
    ctx = myCanvas.getContext("2d");
    myCanvas.width = 1400;
    myCanvas.height = 700;
    originX = (myCanvas.width)/2;
    originY = (myCanvas.height)/2;
    aInput = document.getElementById("a");
    bInput = document.getElementById("b");    
    cInput = document.getElementById("c");   
    drawFrame(scale);
    getCoefficient();
    reDraw();
    zoomIn.addEventListener("click", function() {
        scale = scale * 2;
        reDraw();
    });
    zoomOut.addEventListener("click", function() {
        scale = scale * 0.5;
        reDraw();
    });        
    aInput.addEventListener("change", function() {
        getCoefficient();
        reDraw();
    }); 
    bInput.addEventListener("change", function() {
        getCoefficient();
        reDraw();
    });
    cInput.addEventListener("change", function() {
        getCoefficient();
        reDraw();
    });
})
function getCoefficient() {
    coefA = Number(aInput.value);
    coefB = Number(bInput.value);
    coefC = Number(cInput.value); 
}
function drawFrame(scale) {
    
    const numberGrid = 20;
    
    minX = 0;
    maxX = myCanvas.width;
    minY = 0;
    maxY = myCanvas.height;
    const stepX = (maxX/numberGrid/2).toFixed(0);
    const stepY = (maxY/numberGrid/2).toFixed(0);
    ctx.beginPath();
    ctx.moveTo(minX, originY);
    ctx.lineTo(maxX, originY);  
    ctx.moveTo(originX, minY);
    ctx.lineTo(originX, maxY);
    ctx.strokeStyle = colors[2];
    ctx.lineWidth = 1;
    let label = 0;
    for (let i = 0; i <= numberGrid; i++) {
        label = (i*stepX/scale).toFixed(0);
        ctx.moveTo(originX+i*stepX, originY - 5);
        ctx.lineTo(originX+i*stepX, originY + 5);
        ctx.fillText(String(label), originX+i*stepX-6, originY + 10);
    }
    for (let i = 1; i <= numberGrid; i++) {
        label = (-i*stepX/scale).toFixed(0);
        ctx.moveTo(originX-i*stepX, originY - 5);
        ctx.lineTo(originX-i*stepX, originY + 5);
        ctx.fillText(String(label), originX-i*stepX - 10, originY + 10);
    }
    for (let i = 0; i <= numberGrid; i++) {
        label = (i*stepY/scale).toFixed(0); 
        ctx.moveTo(originX - 5, originY - i*stepY);
        ctx.lineTo(originX + 5, originY- i*stepY);
        ctx.fillText(String(label), originX - 20, originY - i*stepY + 4);
    }
    for (let i = 1; i <= numberGrid; i++) {
        label = (-i*stepY/scale).toFixed(0);  
        ctx.moveTo(originX - 5, originY + i*stepY);
        ctx.lineTo(originX + 5, originY + i*stepY);
        ctx.fillText(String(label), originX - 20, originY + i*stepY + 4);
    }
    ctx.closePath();
    ctx.font = "12px bold monospace";
    ctx.stroke();
}
function parabola() {
    for (let i = -200; i <= 200; i++) {
        pointX.push(i);
        pointY.push(coefA * i * i + coefB * i + coefC);
    } 
} 
function drawCurve(scale) {
    ctx.beginPath();
    ctx.moveTo(pointX[0] * scale + originX, originY - pointY[0] * scale);
    for (let i = 1; i < pointX.length; i++) {
        ctx.lineTo(pointX[i] * scale + originX, originY - pointY[i] * scale);
    }
    ctx.strokeStyle = colors[0];
    ctx.lineWidth = 2;  
    ctx.stroke();
}
function reDraw() {
    ctx.clearRect(0, 0, myCanvas.width, myCanvas.height);
    pointX.length = 0;
    pointY.length = 0;
    parabola();
    drawCurve(scale);
    drawFrame(scale);
}