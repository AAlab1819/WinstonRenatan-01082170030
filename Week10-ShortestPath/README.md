# HELLO THERE PLEASE READ ME

# 4C: Dijkstra?
xxx
Complexity Worst Case: *O*(*nlogn*)<br>
<br>
Here is the problem and solution link for Problem 20C in codeforces.com <br>
[Problem Link 20C](http://codeforces.com/problemset/problem/20/C) <br>
[Submission Link 20C]() <br>

# 601A: The Two Routes
In this problem we need to find the shortest way to reach a the last town from the first town. <br>
To solve this problem we will use an adjacency matrix. Because in this problem we did not care, how much the travel cost is, all we want to know is how many transits to reach the last town. <br>
```Java
5 5
4 2
3 5
4 5
5 1
1 2
```
So here at the example input, there will be 5 towns in total and 5 rail connection. We can see it as adjacency matrix below.
```Java
  1 2 3 4 5
1 0 1 0 0 1
2 1 0 0 1 0
3 0 0 0 0 1
4 0 1 0 0 1
5 1 0 1 1 0
```
Complexity Worst Case: *O*(*n*<sup>2</sup>)<br>
<br>
Here is the problem and solution link for Problem 601A in codeforces.com <br>
[Problem Link 601A](http://codeforces.com/problemset/problem/601/A) <br>
[Submission Link 601A](http://codeforces.com/contest/601/submission/45582762) <br>
