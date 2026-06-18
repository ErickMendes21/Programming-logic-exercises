// var input = require('fs').readFileSync('stdin', 'utf8')
var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n');

var A = parseInt(lines.shift())
var B = parseInt(lines.shift())

var X = A + B

console.log('X = ' + X)

// Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print 
// X as shown below. Print endline after the result otherwise you will get “Presentation Error”.

// Input:
// The input file will contain 2 integer numbers.

// Output:
// Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X, according to the following example.

// Obs.: don't forget the endline after all.

// .Samples Input:
// 10
// 9

// -10
// 4

// 15
// -7

// .Samples Output:
// X = 19

// X = -6

// X = 8