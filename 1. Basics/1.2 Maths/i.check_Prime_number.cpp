/* Question - 9 : Check for Prime Number
You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.

A prime number is a number which has no divisors except 1 and itself.

Time Complexity: O(N) – Looping N times to find the count of all divisors of N.

Space Complexity: O(1)

Code:

*/
class Solution {
   public:
    bool isPrime(int n) {
        // your code goes here
        if (n <= 1) return false;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};