# compilers_course
Hello! In this repository I have included a project I completed for my compilers course. Our task was to create a program that would act as a recursive descent parser. The parser is to check if a given input string conforms to a specific grammar. 
# Files
[project_instructions.docx](https://github.com/espdieg/compilers_course/blob/main/project_instructions.docx)- This document contains the entire instructions for the assignment along with a similar example to a parser with a different grammar.

[output.PNG](https://github.com/espdieg/compilers_course/blob/main/output.PNG) - This image is one that I took after compiling and running the program myself. As you can see I tried three different input strings to show examples of successful and non-successful parsing.

[projectCode.cpp](https://github.com/espdieg/compilers_course/blob/main/projectCode.cpp) - This file contains the code I wrote to complete this assignment. Briefly, the code structure is as follows:
- A global declaration of functions(S(), A(), B()), an array for the input string, and a pointer to traverse input string. 
- A main function which accepts an input string, initializes pointer to string, and then calls S() function.
- S() function checks for the pattern starting with 'a'. If this is true then it adjusts pointer and calls A() and B() functions
- A() function checks if the current character is 'b', 'c', or 'a'. If this is true it adjusts pointer and returns true back to S() function
- B() function checks if the current character is 'd'. If this is true it adjusts pointer and returns true back to S() function

# To try it yourself
In order for me to run this I used [MobaXterm](https://mobaxterm.mobatek.net/) to remote into our campus lab computers which are running linux. I compiled program by [changing current directory](https://www.geeksforgeeks.org/basic-linux-commands/#) to the directory where projectCode.cpp was stored. I then ran 'g++ -o r projectCode.cpp' and executed by running './r'. This was how it was easiest for me to save and submit my files for this assignment but for yourself I would definitely recommend just using an IDE such as [Visual Studio](https://visualstudio.microsoft.com/).

# Further info
I also wanted to include a few references to webpages that summarize what a recursive descent parser even is. I don't think it's a secret when I say compilers can be a very dry subject and I am by far not an expert here. These resources helped me gain a better understanding needed to complete this project in a timely manner:
- https://www.tutorialspoint.com/what-is-recursive-descent-parser
- https://www.geeksforgeeks.org/recursive-descent-parser/#
- https://www.cs.utexas.edu/~pingali/CS380C/2020/lectures/Recursive-descent.pdf

- Thank you for taking the time to check this out 🤓
