# HELLO THERE PLEASE READ ME

# 10130 SuperSale
The problem here is quite simple, everyone has their own maximum power to carry certain weight. Each item has its own value (price) and their weight. Our job is to find the maximum value one can get, a person can get more than one item depends on their maximum power. <br>
The first input is the total test case. <br>
Where each test case will contain the number of item a store have followed by their value and weight. <br>
Then it will be continued by how many person are there in the group, each with their strength/maximum carrying weight. <br>
The output will be the maximum value the group can take. <br>
The solution of this problem uses Dynamic Programming. Here we will first find the maximum value we can hold for certain weight. We will know that by checking each item by looping and another loop from the heaviest possible carrying weight to the smallest. Here we will see, if the weight of item is smaller or equal to current carrying weight and the value of the current carrying weight is smaller than the value of carrying another item value and this item value. Then we will change the value to it. <br>
```Java
For example:
        Value   Weight
Item A:   6       10  
Item B:   3        2
Item C:   5        8

So here, assume we have maximum carrying weight 11.
Rather than taking just a single item, item A with maximum value 6.
We will take two item, which is B and C with the total value of 8.
```
So, now after all these loopings we will get the maximum value for each weight we can carry. Then we just need to add up all the maximum value of everyone and print that number. <br>
Here the worst time complexity will be O(n<sup>2</sup>) assuming the total test case and number of items are the same. <br>
