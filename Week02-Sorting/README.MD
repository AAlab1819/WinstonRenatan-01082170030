# HELLO THERE PLEASE READ ME

# 291A: Spyke Talks
This problem wants us to find how many chatting secretaries there are in a company or the record is a mistake if there are three secretary using one id. <br>
The first line input will be the number of secretaries in corporation, then followed by number id of each secretary in the next line. <br>
The solution here is to input all the things, if it is a zero add it to a container. Then, sort the array that contain the number id of each secretary using the given merge sort. Set the temporary number to the first non-zero number in the array using the container we first use. Afterward, for loop the array starting from the non-zero number plus one. If the number checked is not the same with temporary number then we change the temporary number to that number. If it is the same number then add variable tempSame (how many time a number have been the same), then check if its two then add the number of chatting secretaries. On the other hand, if its more than 2 then it is a mistake and break the for loop. If after the for loop it is not a mistake print the number of chatting secretaries, else print "-1". <br>
<br>
Here is the problem and solution link for Problem 291A in codeforces.com <br>
[Problem Link 291A](http://codeforces.com/contest/291/problem/A) <br>
[Submission Link 291A](http://codeforces.com/contest/291/submission/42707055) <br>

# 230A: Dragons
The problem is to see whether the character can pass all the levels or not, seeing from current character strength that can be added if he defeat the dragon. To defeat the dragon the character's strength must be strictly bigger than the dragon's. <br>
The first line input will be Kirito's (character) current strength and how many dragons are there. Continued by line of number of the dragons which each have the dragon's strength and bonus strength if character can defeat the dragon. <br>
The problem here giving you the free choice which dragon to fight first. The solution here is to sort the dragon's health from the lowest to the highest. Then we check it one by one and add the bonus point if the character can defeat the dragon. If the character can defeat all the dragons then print "YES", while if he is stuck in certain level print "NO". <br>
<br>
Here is the problem and solution link for Problem 230A in codeforces.com <br>
[Problem Link 230A](http://codeforces.com/contest/230/problem/A) <br>
[Submission Link 230A](http://codeforces.com/contest/230/submission/42709610) <br>

# 768A: Oath of the Night's Watch
The problem here is to find how many steward that Jon Snow feed. Jon Snow will feed a steward if there is exactly someone WEAKER AND STRONGER than the steward strength itself. <br>
The first line input will be the number of the stewards, then the second line will be the strength of each steward. <br>
The solution here is to find the smallest and biggest strength in the group. Then we check all the steward's strength, if it is not the smallest nor the biggest strength, then the steward strength must be in between. Then, Jon Snow can feed the person. <br>
Don't forget to output the number of steward that Jon Snow feed. <br>
<br>
Here is the problem and solution link for Problem 768A in codeforces.com <br>
[Problem Link 768A](http://codeforces.com/contest/768/problem/A) <br>
[Submission Link 768A](http://codeforces.com/contest/768/submission/42600533) <br>
