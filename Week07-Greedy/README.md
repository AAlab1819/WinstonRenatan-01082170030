# HELLO THERE PLEASE READ ME

# 946A: Partition
The problem here is trying to get the maximum number from list of element. The list will be divided to two groups which is B and C. What we expect to get the maximum is from B-C. The elements of B will be sum up and C too, then we will do B minus C. <br>
The first input is number of total elements. <br>
The second line of input is the value of elements. <br>
The output will be B-C. <br>
The solution here is quite simple, we do a for loop for the elements. If, the value of elements is negative we put it too C. Otherwise, we put the positive one to B. Then it must be the maximum number output. Because, when - meets - it becomes positive. <br>
Complexity Worst Case: *O*(*n*)<br>
<br>
Here is the problem and solution link for Problem 115A in codeforces.com <br>
[Problem Link 946A](http://codeforces.com/problemset/problem/946/A) <br>
[Submission Link 946A](http://codeforces.com/contest/946/submission/44467101) <br>

# 978B: File Name
The problem here is to find how many "xxx" we should remove from the given string, because it is a forbidden characters. <br>
The first line input is the length of string. <br>
The second line input is the string. <br>
The solution here is to loop all the characters one by one, and if there is 'x' character three in a row. We then add the number of removed forbidden characters. <br>
Complexity Worst Case: *O*(*n*)<br>
<br>
Here is the problem and solution link for Problem 978B in codeforces.com <br>
[Problem Link 978B](http://codeforces.com/problemset/problem/978/B) <br>
[Submission Link 978B](http://codeforces.com/contest/978/submission/44467319) <br>

# 731B: Coupons and Discounts
The problem here is to find is it possible to use discount (Buy 2 directly) and coupon (Buy 1 and get 1 voucher for tomorrow). There will be training for n-days and there will be x-teams that attend that training session that day. We need to order the pizza according to the number of teams. If it is possible to use discount and coupon print "YES". On the other hand, print "NO". <br>
The first input is number of days to train. <br>
The second line input is the pizza that is needed to be ordered that day. <br>
The output will be "YES" or "NO" depends on is it possible or not possible to use discount and coupons for all. <br>
The solution here is first, we need to input all the pizza that is needed to be ordered on days of the training. If it is an odd number and bigger than two, then we will use discount and a coupon. Then, we will subtract tommorow's order by one (using the coupon we have from today's order). Then we will continue to do it so, while checking if that day the pizza order is negative, then there will be left over pizza at that day which means it is not possible to use discount and coupons. Then we need to check at the last day, if it is even or odd, if it is odd it means it use coupon and there will be left over which means not possible. <br>
Complexity Worst Case: *O*(*n*)<br>
<br>
Here is the problem and solution link for Problem 731B in codeforces.com <br>
[Problem Link 731B](http://codeforces.com/problemset/problem/731/B) <br>
[Submission Link 731B](http://codeforces.com/contest/731/submission/44467911) <br>
