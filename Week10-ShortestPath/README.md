# HELLO THERE PLEASE READ ME

# 20C: Dijkstra?
Here we need to find the shortest (smallest weight) to go from vertices 1 to N. Here what we will do is finding the shortest(cheapest) path to every single vertices. Then we will find which one is best to bring us to N. The solution will uses Dijkstra Algorithm as the problem name itself. Remember what we want to find is the path not the cost, so we must watch out for the source. For example, the input below. <br>
```Java
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
SOURCE DESTINATION PRICE
  1  ->     2       (2)
  2  ->     5       (5)
  2  ->     3       (4)
  1  ->     4       (1)
  4  ->     3       (3)
  3  ->     5       (1)
```
We may see it is easier if we go 1->2->5 which will cost 2+5=7. It is correct if we want to find the shortest path. But, here we want to find the cheapest, which will be 1->4->3->5 that cost 1+3+1=5. <br>
Complexity Worst Case: *O*(*nlogn*)<br>
<br>
Here is the problem and solution link for Problem 20C in codeforces.com <br>
[Problem Link 20C](http://codeforces.com/problemset/problem/20/C) <br>
[Submission Link 20C](http://codeforces.com/contest/20/submission/45652999) <br>

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
So first, we will check whether there is a railway directly from 1 to town N, if yes it means that we can travel to town N from town 1 in just one hour and find a way to town N using the bus. On the other side, if it is no railway (means there is a bus stop) from town 1 to town N, we just need to find how to transport from town 1 to town N using the train. In this case, we use Breadth First Seach to find the shortest path. <br>
Complexity Worst Case: *O*(*n*<sup>2</sup>)<br>
<br>
Here is the problem and solution link for Problem 601A in codeforces.com <br>
[Problem Link 601A](http://codeforces.com/problemset/problem/601/A) <br>
[Submission Link 601A](http://codeforces.com/contest/601/submission/45582762) <br>
