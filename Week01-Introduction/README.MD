# HELLO THERE PLEASE READ ME

## 854A: Fraction
The problem here is, to find the maximum irreducible fraction (numerator and the denominator do not have the same factor, so it can't be lower anymore) which the numerator is less than the denominator. Where numerator and the denominator equals to the given number. <br>
The input will be a number given (Total number of denominator and numerator), while the output will be the numerator and denominator. <br>
The solution here is to count from the given number divided by 2. If the number given is odd, then the numerator will be given number divided by 2 while the denominator is given number subtract with numerator we count before. Else if the number is an even number, then we divide the number by 2. If the divided number is even, we subtract it by 1, it is now the numerator, while the denominator is given number subtract to the numerator we have count. If the divided number is odd, we subtract it by 2, it is now the numerator, while the denominator is given number subtract to the numerator we have now. 
<br>
Here is the problem and solution link for Problem 854A in codeforces.com <br>
[Problem Link 854A](http://codeforces.com/contest/854/problem/A) <br>
[Submission Link 854A](http://codeforces.com/contest/854/submission/42296421) <br>

## 912A: Tricky Alchemy
The problem given is finding how many crystal needed more, in this problem there is a ball and crystal, which ball is form using certain amount of crystal. <br>
Yellow Ball = 2 Yellow Crystals <br>
Green Ball = 1 Yellow Crystal + 1 Blue Crystal <br>
Blue Ball = 3 Blue Crystals <br>
First line input will be Yellow Crystal and Blue Crystal Grisha have. <br>
Second line input will be Yellow Ball, Green Ball, and Blue Ball Grisha want to form. <br>
The output expected is the total crystal Grisha need from both Yellow and Blue Crystal. <br>
First we need to count how many crystal we need for each color: <br>
Yellow Crystals = (Yellow Ball x 2) + Green Ball - Yellow Crystal we have. <br>
Blue Crystals   = (Blue Ball x 3) + Green Ball - Blue Crystal we have. <br>
If the need for one or both of the crystals is less then 0, make the need for that crystal equal to zero. <br>
Then we add the need for Yellow Crystal and Blue Crystal. <br>
<br>
Here is the problem and solution link for Problem 912A in codeforces.com <br>
[Problem Link 912A](http://codeforces.com/contest/912/problem/A) <br>
[Submission Link 912A](http://codeforces.com/contest/912/submission/42300682) <br>

## 988A: Diverse Team
It is given there students and they want to form team of certain number. Each of them have their own rank in Codehorses, the team must consist of students with different rank.<br>
First line input will be number of students in class and how many person in team there will be.<br>
Second line input will be rank of each students.<br>
The output is "YES" if they can make team with that rules and "NO" if they can't. If they can form the team, Also output which students are in the group. <br>
First we need to get and store all of the students rank in an array. <br>
Then we need to loop the array until the team member is reach or all of the student is checked. <br>
For the first student, of course the rank will be distinct, because there is no one yet in the team. <br>
Then for the rest, check their rank with all the students before, if there is no such rank, add them as the team member. <br>
If after all the loop the required number is not reached, print NO. Otherwise, print YES and the number of the student that is part of the team. <br>
<br>
Here is the problem and solution link for Problem 988A in codeforces.com <br>
[Problem Link 988A](http://codeforces.com/contest/988/problem/A) <br>
[Submission Link 988A](http://codeforces.com/contest/988/submission/42335085) <br>
