# HELLO THERE PLEASE READ ME

# 598D: Igor In the Museum
Igor is in the museum with n x m dimension, with empty cells where he can travel and cells with picture which he can see. In that empty spaces he can travel and walk to see other picture. The problem is we need to find how many picture Igor can see if he is placed in dimension x , y as starting point. <br>
The first line input will be the row and the column followed by how many starting position Igor will be placed in. <br>
The next n x m line will be the cells filled with asteriks and dot. <br>
The next will be x y Igor starting position. <br>
The output will be how many picture in maximum can Igor see in that starting position. <br>
The solution here is not yet found :( <br>
<br>
Here is the problem and solution link for Problem 598D in codeforces.com <br>
[Problem Link 598D](http://codeforces.com/contest/598/problem/D) <br>
[Submission Link 598D](http://codeforces.com/contest/598/submission/43352896) <br>

# 268B: Buttons
The problem here is to count how many times Manao must push a button until the lock is unlocked. He will act in an optimal way and we must calculate the number for the worst case scenario. <br>
The only input will be the number of buttons to open. <br>
The output will be the number he need to push a button. <br>
The solution here is to loop it and at last add with the correct key. The function inside the for loop will be totalPush = totalPush + ((numberOfLock - i) * i). <br>
<pre>
Example input will be 4.
BUTTONS |o o o o| TRIES
1st loop 0          1
           0        1
             0      1
               1    C
2nd loop 0     1    2
           0   1    2
             1 1    C
3rd loop 0   1 1    3
           1 1 1    C
Outside  1 1 1 1    4
C means Correct, so we get the total to 14. <br>
</pre>
<br>
Here is the problem and solution link for Problem 268B in codeforces.com <br>
[Problem Link 268B](http://codeforces.com/problemset/problem/268/B) <br>
[Submission Link 268B](http://codeforces.com/contest/268/submission/43107631) <br>
