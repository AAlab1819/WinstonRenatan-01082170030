# HELLO THERE PLEASE READ ME

# Heaps: Find the Running Median
The complexity for this problem is *O*(*n*)<br>
<br>

# Roy and Trending Topics
The problem here is to find 5 Trending Topics (topics with the highest z-score). Each topic will have its own ID and each of them also have a starting z-score (current). Here are some rules that can increase the z-score of a topic.<br>

1. The topic is mentioned in a 'Post' +50 <br>
2. A like on the topic +5 <br>
3. A comment on the topic +10 <br>
4. A share on the topic +20 <br>

The input here will be number of changes. Each line then consist of Topic ID, current z-score, posts, likes, comments, shares. Where each are seperated by a space. <br>
The output will be the 5 highest z-score topics. Which, each line contain the Topic ID and the new z-score. Which is sorted by the new z-score first. Then if the z-score is the same, the bigger Topic ID will be prioritize. <br>
The complexity for this problem is *O*(*nlogn*)<br>
<br>
