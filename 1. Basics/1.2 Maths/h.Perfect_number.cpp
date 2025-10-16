/* Question - 8 : Check for Perfect Number
You are given an integer n. You need to check if the number is a perfect number or not. 
Return true if it is a perfect number, otherwise, return false.

A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.

To understand the concept behind this question do watch the solution video on youtube, very important.

Time Complexity: O(sqrt(N)) – Running a loop from 1 to square root of N.
Space Complexity: O(1) 

code:
*/

class Solution {
   public:
    bool isPerfect(int n) {
        // int temp = n;
        int sum = 1;   //since every number has 1 as their divisor.

        for (int i = 2; i * i < n; i++) {  
            if (n % i == 0) {
                sum += i;
                if (i != n / i) 
                    sum += n/i;   //if the divisor is not listed till sqrt(n), add n/i
            }
        }
        if (sum == n) return true;

        return false;  
    }
};