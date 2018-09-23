# HELLO THERE PLEASE READ ME

# 598D: Igor In the Museum
<br>
Here is the problem and solution link for Problem 598D in codeforces.com <br>
[Problem Link 598D](http://codeforces.com/contest/598/problem/D) <br>
[Submission Link 598D]() <br>

# 268B: Buttons
The problem here is to count how many times Manao must push a button until the lock is unlocked. He will act in an optimal way and we must calculate the number for the worst case scenario. <br>
The only input will be the number of buttons to open. <br>
The output will be the number he need to push a button. <br>
The solution here is to loop it and at last add with the correct key. The function inside the for loop will be totalPush=totalPush+((numberOfLock-i)xi). <br>
<pre>
Example input will be 4.
BUTTONS |o o o o| TRIES
1st loop 0          1   <br>
           0        1   <br>
             0      1   <br>
               1    C   <br>
2nd loop 0     1    2   <br>
           0   1    2   <br>
             1 1    C   <br>
3rd loop 0   1 1    3   <br>
           1 1 1    C   <br>
Outside  1 1 1 1    4  ** <br>
C means Correct, so we get the total to 14. <br>
</pre>
<br>
Here is the problem and solution link for Problem 268B in codeforces.com <br>
[Problem Link 268B](http://codeforces.com/problemset/problem/268/B) <br>
[Submission Link 268B](http://codeforces.com/contest/268/submission/43107631) <br>
