# [Binary Numbers with More 1s in All Prefixes](https://www.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1)
## Medium
Given a positive integer n, generate all n-bit binary numbers such that, for every prefix of each binary number, the count of 1's is greater than or equal to the count of 0's. 
Return the binary numbers in decreasing order of their decimal value.
Examples :
Input: n = 2
Output: ["11", "10"]
Explanation: Valid numbers are those where each prefix has more 1s than 0s:11: all its prefixes (1 and 11) have more 1s than 0s.
10: all its prefixes (1 and 10) have more 1s than 0s.So, the output is "11, 10".

Input: n = 3
Output: ["111", "110", "101"]
Explanation: Valid numbers are those where each prefix has more 1s than 0s.111: all its prefixes (1, 11, and 111) have more 1s than 0s.
110: all its prefixes (1, 11, and 110) have more 1s than 0s.101: all its prefixes (1, 10, and 101) have more 1s than 0s.So, the output is "111, 110, 101".
