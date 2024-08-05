## Problem 1 solution

1. Use binary search twice to find the starting and ending position of a given target value.
2. The time complexity of the binary search algorithm is O(log n) where n is the length of the input array `nums`. The searchRange method calls `binary_search` twice, so the overall time complexity remains O(log n).

## Problem 2 solution

1. Use two pointers technique to solve this question.
2. Time complexity: O(n^2)
* "n" is the length of the input string `s`. This is because the code uses nested loops. The outer loop runs for each character in the string, and the inner loop `expandAroundCenter` can potentially run for the entire length of the string in the worst case, leading to a quadratic time complexity.

## Problem 3 solution

1. Use brute force approach.
2. Time complexity: O((m+n) * log(m+n))
* Create a new array with a size equal to the total number of elements in both input arrays.
* Insert elements from both input arrays into the new array.
* Sort the new array.
* Find and return the median of the sorted array.
