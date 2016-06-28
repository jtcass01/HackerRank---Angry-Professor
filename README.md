# HackerRank---Angry-Professor
Language: C++

**************************************************************************************************************************************
Instructions for this problem are hard to read since some of the special characters and given values would not copy and paste over.  See the website link in the description for a better description
**************************************************************************************************************************************

A Discrete Mathematics professor has a class of  students. Frustrated with their lack of discipline, he decides to cancel class if fewer than  students are present when class starts.

Given the arrival time of each student, determine if the class is canceled.

Input Format

The first line of input contains , the number of test cases.

Each test case consists of two lines. The first line has two space-separated integers, (students in the class) and  (the cancelation threshold). 
The second line contains  space-separated integers () describing the arrival times for each student.

Note: Non-positive arrival times () indicate the student arrived early or on time; positive arrival times () indicate the student arrived  minutes late.

Output Format

For each test case, print the word YES if the class is canceled or NO if it is not.

Constraints

1 <= T <= 10
1 <= N <= 1000
1 <= K <= N
-100 <= 

Note 
If a student arrives exactly on time , the student is considered to have entered before the class started.

Sample Input

2
4 3
-1 -3 4 2
4 2
0 -1 2 1
Sample Output

YES
NO
Explanation

For the first test case, K=3. The professor wants at least  students in attendance, but only have arrived on time (-3 and -1). Thus, the class is canceled.

For the second test case, K=2. The professor wants at least 2 students in attendance, and there are 2 who have arrived on time (0 and -1). Thus, the class is not canceled.
