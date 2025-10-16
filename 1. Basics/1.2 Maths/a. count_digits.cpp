/* Question - 1 :  Count all Digits of a Number
You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.

Time Complexity: O(log₁₀(N)) – In every iteration we are dividing N by 10. 
(if you divide the steps by 2, the base of the log would be 2)
Space Complexity: O(1) – Using a couple of variables i.e., constant space.

C++ Code:
*/
class Solution {
   public:
    int countDigit(int n) {
        int count = 0;
        if (n == 0) return 1;   //only one digit.
        while (n > 0) {
            int lastdigit = n % 10;    // this is a step used in later questions 
            n = n / 10; 
            count = count + 1;   // this is the step that we require for this problem
        }
        return count;
    }
};
