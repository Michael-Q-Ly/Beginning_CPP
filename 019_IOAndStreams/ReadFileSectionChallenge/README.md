# Section 19 - Challenge 2: Automatic Grader

Write a program that reads a file named "responses.txt" that
contains the answer key for a quiz as well as student responses
for the quiz

The answer key is the first item in fhe file.  
Student1 name  
Student1 responses  
Student2 name  
Student2 responses  
..

Here is a sample file:

ABCDE  
Michael  
ABCDE  
Larry  
ABCAC  
Moe  
BBCDE  
Curly  
BBAAE  
Maria  
BBCDE

You should read the file and display:
* Each student's name and score (# correct out of 5)
* At the end, the class average should be displayed
* You may assume that the data in the file is peroperly formatted

Program should output to the console the following:  
Student &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; Score  
\--------------------------------------------  
Michael &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; 5  
Larry &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&nbsp;&nbsp;&nbsp;
&nbsp;5  
Moe &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&ensp;&ensp;&ensp;&nbsp;
&nbsp; 5  
Curly &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&ensp;&ensp;
 5  
Maria &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&ensp;&ensp;&ensp;&nbsp;
 5  
\--------------------------------------------  
Average Score &emsp;&emsp;&emsp;&emsp;&emsp;&nbsp;&nbsp; 3.6
