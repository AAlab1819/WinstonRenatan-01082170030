# HELLO THERE PLEASE READ ME

# 492B: Vanya and Lanterns
The problem here is to find the minimum radius of a lantern so that it can cover all the streets.<br>
The first line input is the number of lanterns and the length of the street.<br>
The next line will be the location of the lanterns in the streets.<br>
The solution here is first to count the distance from 0 to first lantern, then the edge of the street to the last lantern, and the biggest gap between lanterns by sorting the location of the lantern in non-decreasing way. We then divide the biggest gap by two to find the radius, because it is in between two lanterns.<br>
Then we find the greatest number between those three and print it.<br>
Complexity:<br>
Worst Case: *O*(*nlogn*)<br>
Average Case: &theta;(HOHO*n<sup>2</sup>*HOHO)<br> 
Best Case: &Omega;(*nlogn*)<br>
<br>
Here is the problem and solution link for Problem 492B in codeforces.com <br>
[Problem Link 492B](http://codeforces.com/contest/492/problem/B) <br>
[Submission Link 492B](http://codeforces.com/contest/492/submission/42833028) <br>

# 148A: Insomnia cure
The problem here is to find the total dragon damaged, dragon is categorized damage if the number can be divided by one of the four number in the input. <br>
The first four input is for every n-th dragon it will be damaged. Then, the fifth input will be the total dragons. <br>
If there is 1 in any of the first four input, then all dragons will be damaged. Because, any number can be divided by 1 with no remainder. <br>
Else for the others, do a for loop to check each number starting from 1 to the number of dragons. If the number is divisible by one of the four number given then, add the damaged dragon. <br>
Output the damaged dragon. <br>
Complexity:<br>
Worst Case: *O*(*n*)<br>
Average Case: &theta;(*n*)<br> 
Best Case: &Omega;(*1*)<br>
It is possible if one of the four input is 1. <br>
<br>
Here is the problem and solution link for Problem 148A in codeforces.com <br>
[Problem Link 148A](http://codeforces.com/contest/148/problem/A) <br>
[Submission Link 148A](http://codeforces.com/contest/148/submission/42835066) <br>

# 469A: I Wanna Be the Guy
The problem given here is can Little X and Little Y solve all the level or not if they work together. <br>
The first line input will be the total levels in the game. <br>
The second line input will be the total level Little X can pass, and at which levels it is. <br>
The third line input will be the total level Little Y can pass, and at which levels it is. <br>
Solution to this problem will be start by declaring an array of all levels with 1 [Not yet Passed] and when Little X or LIttle Y can solve the level change it with 0 [Able to Passed]. Last, for loop once more to check are there any unsolved level. If there is unsolved level output "Oh, my keyboard!". On the other hand, if all level is solved output "I become the guy.". <br>
Complexity:<br>
Worst Case: *O*(*n*)<br>
Average Case: &theta;(*n*)<br> 
Best Case: &Omega;(*n*)<br>
<br>
Here is the problem and solution link for Problem 469A in codeforces.com <br>
[Problem Link 469A](http://codeforces.com/contest/469/problem/A) <br>
[Submission Link 469A](http://codeforces.com/contest/469/submission/42835587) <br>
