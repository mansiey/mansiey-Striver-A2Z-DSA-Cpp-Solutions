/* Question - 2 : Count number of odd digits in a number
You are given an integer n. You need to return the number of odd digits present in the number.
The number will have no leading zeroes, except when the number is 0 itself.


Time Complexity: O(log₁₀(N)) 
Space Complexity: O(1) 

C++ Code : 
*/

class Solution {
   public:
    int countOddDigit(int n) {
        int cnt = 0;
        if (n == 0) return 0;
        while (n > 0) {
            int lastdigit = n % 10;
            if (lastdigit % 2 == 1) {
                cnt = cnt + 1;   //do the increament onlt if the digit is odd
            }
            n = n / 10;
        }
        return cnt;
    }
};