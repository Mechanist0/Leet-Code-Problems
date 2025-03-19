You are given a binary array nums.
You can do the following operation on the array any number of times (possibly zero):
  Choose any 3 consecutive elements from the array and flip all of them.
Flipping an element means changing its value from 0 to 1, and from 1 to 0.
Return the minimum number of operations required to make all elements in nums equal to 1.
If it is impossible, return -1.

---

From left, flip

011100
100100
111000
111111

From left to right, find first 0 and flip it and the two next bits
