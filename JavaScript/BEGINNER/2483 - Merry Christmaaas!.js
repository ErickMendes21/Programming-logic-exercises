// var input = require('fs').readFileSync('stdin', 'utf8');
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let I = parseInt(lines[0])
let arr = []
for (let i = 0; i < I; i++) {
    arr.push('a')
}

console.log("Feliz nat" + arr.join('') + "l!")

// You get so happy at Christmas that you want to scream at everyone: "Merry Christmas!!". To put all this happiness out, you wrote a program that, given an I index of 
// happiness, your Christmas scream is more lively.

// Input:
// The input consists of an integer I (1 < I ≤ 104) that represents that happiness index.

// Output:
// The output consists of the phrase "Feliz natal!" ("Merry Christmas" in Portuguese), and the last a of the sentence is repeated I times. A line break is necessary after 
// printing the sentence.

// .Input Sample:
// 5

// .Output Sample:
// Feliz nataaaaal!