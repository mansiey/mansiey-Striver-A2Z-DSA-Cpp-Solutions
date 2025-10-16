/*Question - 7 : Check if the Number is Armstrong
You are given an integer n. You need to check whether it is an armstrong number or not. 
Return true if it is an armstrong number, otherwise return false.


Armstrong Number :
It is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

Time Complexity: O(log₁₀(N)) 
Space Complexity: O(1) 

*/

class Solution {
   public:
    bool isArmstrong(int n) {
        int sum = 0;
        int temp = n;
        int count = log10(temp) + 1;   //another way to count the no. of digits

        while (temp > 0) {
            int lastdigit = temp % 10;

            sum = sum + pow(lastdigit, count);  //add the count power of last digit
            temp = temp / 10;
        }
        if (sum == n) return true;
        
        return false;
    }
};