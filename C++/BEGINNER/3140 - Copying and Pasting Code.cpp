#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;
    string n;
    string bodyStart = "<body>";
    string bodyEnd = "</body>";
    while(getline(cin, n)) {
        if (n.find(bodyStart) != string::npos) {
            count++;
        }
        if (count == 1 && n.find(bodyEnd) == string::npos && n.find(bodyStart) == string::npos) {
            cout << n << endl;
        }
        if (n.find(bodyEnd) != string::npos) {
            count++;
        }
    }

    return 0;
}

// During the pandemic, with the temporary suspension of the academic calendar at UFSC, Lucas has taken advantage of his free time to take 
// several online courses and learn to use new technologies and programming libraries.

// He recently participated in a free bootcamp on the use of Node.js and the ReactJS library and fell in love. 
// He liked it so much that he decided to port a website that he had created in HTML for this new format.

// Luckily for Lucas, he can reuse most of the HTML scripts, but some parts are no longer necessary, since Node.js and + ReactJS start generating them automatically.
// As there are several files for him to analyze and give control + c, control + v in the codes, he would like your help to speed up the process.

// Given an HTML file, you must write a program that returns only the content between the "<body>" and "</body>" tags, everything else must be ignored.

// Since Lucas is a capricious guy, the code is properly indented. In the opening and closing lines of the body tag there is nothing but the tag itself and indent spaces.

// .Input:
// The entry has several lines, the lines of the HTML file provided by Lucas, and ends with EOF. 
// Each line consists of a sequence of printable characters from the ASCII Table and it is guaranteed that none of them is longer than 1,000 characters or is blank.

// The body opening and closing tags, "<body>" and "</body>" respectively, are guaranteed to appear only once in the entire input file.

// .Output:
// You must print all the lines between the "<body>" and "</body>" tags without including them and keeping the exact original formatting of the file.

// Input Sample:
// <html>
//     <head>
//         <title>Meu primeiro programa em HTML</title>
//     </head>
//     <body>
//          <h1>Hello World!</h1>
//     </body>
// </html>

// Output Sample:
//          <h1>Hello World!</h1>	