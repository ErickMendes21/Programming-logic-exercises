// var input = require('fs').readFileSync('stdin', 'utf8');
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let p = parseInt(lines[0])
let total = 0

for (let i = 1; i <= p; i++) {
    let [code, quantity] = lines[i].split(' ').map(Number)

    if (code == 1001) {
        total += quantity * 1.50;
    } else if (code == 1002) {
        total += quantity * 2.50;
    } else if (code == 1003) {
        total += quantity * 3.50;
    } else if (code == 1004) {
        total += quantity * 4.50;
    } else if (code == 1005) {
        total += quantity * 5.50;
    }
}

console.log(total.toFixed(2))

// The MacPRONALTS is with a super promotion, exclusive to the contestants of the first Selective MaratonaTEC. But they had a problem, all runners were trying to buy 
// at the same time, so this generated a very long queue. The worst is that the cashier girl no have calculator or a program to help her to calculate more quickly. You 
// are the person that will help the girl and the MacPRONALTS increase their sells. Bellow has a menu day, that contains the product number and its value.

// 1001 | R$ 1.50

// 1002 | R$ 2.50

// 1003 | R$ 3.50

// 1004 | R$ 4.50

// 1005 | R$ 5.50

// Input:
// The first entry is reported the number of purchased products (1 <= p <= 5). For each product follows the quantity (1 <= q <= 500) that the customer purchased.

// Obs .: the product number will not be repeated.

// Output:
// You must print the purchase amount with two decimal places.

// .Input Sample:
// 2
// 1001 2
// 1005 3

// 1
// 1003 500

// 5
// 1001 500
// 1005 300
// 1003 23
// 1002 52
// 1004 44

// .Output Sample:
// 19.50

// 1750.00

// 2808.50