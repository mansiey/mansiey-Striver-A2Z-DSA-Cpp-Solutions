/* Question - 5 : Return the Largest Digit in a Number
You are given an integer n. Return the largest digit present in the number.

Time Complexity: O(log₁₀(N)) 
Space Complexity: O(1) 

code:
*/

class Solution {
   public:
    int largestDigit(int n) {
        int largest = 0;
        if(n == 0) return 0;
        
        while (n > 0) {
            int lastdigit = n % 10;
            if (lastdigit > largest) {
                largest = lastdigit;
            }

            n = n / 10;
        }
        return largest;
    }
};