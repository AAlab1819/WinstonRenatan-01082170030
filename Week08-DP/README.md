# HELLO THERE PLEASE READ ME

# 433B: Kuriyama Mirai's Stones
Here we are given a list of stones, each with their own price. The questions possible is type one and two: type one will be sum of stone's cost from l to r and type two will be sum of stone's cost from l to r in an non-decreasing order.<br>
<pre>
If the cost of stones are:
6 4 7 5 3 2
Then we will use the exact array for type one.
While for type two, we will use:
2 3 4 5 6 7
</pre>
The input will be number of stones followed by cost of each stones. <br>
Then it is followed with how many questions will their be. Each question consists of type, l, and r. <br>
The output we should give is the sum of numbers from l to r according its type. <br>
The solution given is to use cumulative array because if we count the sum in each question over and over the time limit will exceed. So, as what have been stated before, we store the cost in two cumulative array: for the normal one and sorted array. Then to get the sum from l to r, it will be array[r-1] - array[l-2]. Except if l=1, Then we just need to take array[r] cause it is the sum from 1 to r. <br>
Complexity Worst Case: *O*(*nlogn*)<br>
<br>
Here is the problem and solution link for Problem 433B in codeforces.com <br>
[Problem Link 433B](http://codeforces.com/problemset/problem/433/B) <br>
[Submission Link 433B](http://codeforces.com/contest/433/submission/44902395) <br>

# 913C: Party Lemonade
xxx <br>
Complexity Worst Case: *O*(*n*)<br>
<br>
Here is the problem and solution link for Problem 913C in codeforces.com <br>
[Problem Link 913C](http://codeforces.com/problemset/problem/913/C) <br>
[Submission Link 913C]() <br>
