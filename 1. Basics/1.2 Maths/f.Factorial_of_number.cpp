/* Question - 6 : Factorial of a given number
You are given an integer n. Return the value of n! or n factorial.

Factorial of a number is the product of all positive integers less than or equal to that number.

Time Complexity: O(N) – Iterating once from 1 to N.
Space Complexity: O(1) – Using a couple of variables i.e., constant space.

Code:
*/

class Solution {
   public:
    int factorial(int n) {
        if (n <= 1) return 1;
        int ans = 1;
        for (int i = 1; i <= n; i++) {
            ans = ans * i;   //keep on multiplying till n.
        }
        return ans;
    }
};
