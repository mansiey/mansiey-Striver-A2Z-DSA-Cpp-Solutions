/* Question - 4 : Palindrome Number
You are given an integer n. You need to check whether the number is a palindrome number or not. 
Return true if it's a palindrome number, otherwise return false.

Palindrome Number:
It is a number which reads the same both left to right and right to left.
ex: 121  -> on reversal it would be the same number.

Time Complexity: O(log₁₀(N)) 
Space Complexity: O(1) 

C++ Code:
*/

class Solution {
   public:
    bool isPalindrome(int n) {
        int revnum = 0;
        int temp = n;
        
        while (temp > 0) {
            int lastdigit = temp % 10;
            temp = temp / 10;

            revnum = (revnum * 10) + lastdigit;
        }
        if (revnum == n)
            return true;
        
        return false;
    }
};