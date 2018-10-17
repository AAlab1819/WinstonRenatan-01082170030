# HELLO THERE PLEASE READ ME

# Roy and Trending Topics
The problem here is to find 5 Trending Topics (topics with the highest z-score). Each topic will have its own ID and each of them also have a starting z-score (current). Here are some rules that can increase the z-score of a topic.<br>

1. The topic is mentioned in a 'Post' +50 <br>
2. A like on the topic +5 <br>
3. A comment on the topic +10 <br>
4. A share on the topic +20 <br>

The input here will be number of changes. Each line then consist of Topic ID, current z-score, posts, likes, comments, shares. Where each are seperated by a space. <br>
The output will be the 5 highest z-score topics. Which, each line contain the Topic ID and the new z-score. Which is sorted based on the changes (New z-score - Old z-score). Then if the change z-score is the same, the bigger Topic ID will be prioritize. <br>
The solution is to list all the possibilities/updates in the program. Then, we will do extract-max and continue it with heapify for five times as needed from the problem.<br>
The complexity for this problem is *O*(*nlogn*)<br>
<br>

# Heaps: Find the Running Median
The problem is to find the median in a list. If the list number is even for example there are four number {1,2,3,4} then the median will be (2+3)/2=2.5. On the other side, if it is odd like three {1,2,3} then the median will be 2. <br>
The first line input will be how many number there will be. It will be followed by the number on each line. <br>
The output will be the median of the list on that line. <br>
<pre>
INPUT:
5
21
3
7
9
32
OUTPUT:
LIST = {21}, will output 21 because there is only one number in the list now.
LIST = {3, 21} will output 12 because it is the sum of both number divided by 2.
LIST = {3, 7, 21} will output 7 as the median.
LIST = {3, 7, 9, 21} will output (7+9)/2 which is 8.
LIST = {3, 7, 9, 21, 32} will output 9 as the median because it is in the middle.
</pre>
The solution here is to create an array then we use heap sort to sort the array then we take thhe median. If the sum of element is now odd then we shall take the middle one, else we will take numElement/2 + numElement/2 then divided it by 2. We will do it everytime we input new element to the array. <br>
The complexity for this problem is *O*(*nlogn*)<br>
<br>
