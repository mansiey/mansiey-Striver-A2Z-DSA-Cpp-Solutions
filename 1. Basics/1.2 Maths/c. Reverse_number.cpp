/* Question - 3: Reverse a number
You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

Time Complexity: O(log₁₀(N)) – In every iteration, N is divided by 10 (equivalent to the number of digits in N.)
Space Complexity: O(1) – Using a couple of variables i.e., constant space.

C++ Code :
*/

class Solution {
   public:
    int reverseNumber(int n) {
        int revnum = 0;
        while (n > 0) {
            int lastdigit = n % 10;
            n = n / 10;

            revnum = (revnum * 10) + lastdigit;  
            //we need to multiply the no. by 10 otherwise if=t will simply add the 2 digits
        }
        return revnum;
    }
};