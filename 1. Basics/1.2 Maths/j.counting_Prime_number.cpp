/* Question - 10 : Count of Prime Numbers till N
You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). 
Return the number of prime numbers in the range.

Time Complexity: O(N3/2) :
Checking all numbers from 1 to N for prime and checking if a number is prime or not will take O(N1/2) TC.
Space Complexity: O(1)

Code :
*/

class Solution {
   public:
    int primeUptoN(int n) {
        int cnt = 0;
        for (int i = 2; i <= n; i++) {
            if (isprime(i)) cnt++;
        }
        return cnt;
    }

    //helper function to check if the number is prime or not
    bool isprime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};