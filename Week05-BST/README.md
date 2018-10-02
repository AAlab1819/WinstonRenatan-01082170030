# HELLO THERE PLEASE READ ME

# 115A: Party
The problem here is there are a number of employees in a company. When there is a party, an employee must not meet someone who is superior or in this case their manager or their upper level. So, we need to calculate how many groups needed to be formed, so that there is no one goes to the party with their manager. <br>
The input here will be the number of employees, and continued by who is the manager of the i-th employee. If the employee did not have a manager then it will be "-1". <br>
The output will be the number of group formed. <br>
The solution here is to check how depth or how long is the connection to the last superior. Then print the solution of the dept <br>
Complexity Worst Case: *O*(*n*<sup>2</sup>)<br>
<br>
Here is the problem and solution link for Problem 115A in codeforces.com <br>
[Problem Link 115A](http://codeforces.com/problemset/problem/115/A) <br>
[Submission Link 115A](http://codeforces.com/contest/115/submission/43668737) <br>

# 4C: Registration system
The problem here is making a registration system at Berland where the name that is registered first will be answered with "OK" and the next one will be "(name)1" the next will be "(name)2" and so on. <br>
The input here will be number of participants to register followed by lines containing names of participants according to the number provided. <br>
The output will be "OK" if the name is never used before and "(name)x", where x is the number depends on how many times has the name been registered to the system. <br>
The solution given here is to note what is the name and how many time it has been register, then just print the name and the times that name has been registered before. <br>
Complexity:*O*(*nlogn*)<br>
<br>
Here is the problem and solution link for Problem 4C in codeforces.com <br>
[Problem Link 4C](http://codeforces.com/problemset/problem/4/C) <br>
[Submission Link 4C](http://codeforces.com/contest/4/submission/43650938) <br>

# 913B: Christmas Spruce
The problem here is we need to determine whether a tree is spruce or not. A tree is called spruce if at least there are 3 leaves children. <br>
The input will be the number of vertexes in tree followed by number-1 lines that each contain the parent of the i-th vertex. Vertex one is the root. <br>
The output will be "Yes" if it is a spruce tree. On the other hand, its a "No" if its not a spruce. <br>
The solution is calculate amount of children from each vertex. Then, loop all the vertexes if it has 0 children then continue, if it has more than 0 but less then 3, it is a "No". Otherwise, if it is true then it will be "Yes". <br>
Complexity:*O*(*n*)<br>
<br>
Here is the problem and solution link for Problem 913B in codeforces.com <br>
[Problem Link 913B](http://codeforces.com/problemset/problem/913/B) <br>
[Submission Link 913B](http://codeforces.com/contest/913/submission/43668348) <br>
