/* Question - 11 : GCD/HCF of Two Numbers
You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. 
Return the GCD of the two numbers.

Greatest Common Divisor (GCD) :
The GCD of two integers is the largest positive integer that divides both of the integers.

code:
*/
class Solution {
   public:
    int GCD(int n1, int n2) {
        // ** optimized
        //gcd(a, b) == gcd(a-b, b) == gcd(a % b, b)
        while (n1 > 0 && n2 > 0) {
            if (n1 > n2) {
                n1 = n1 % n2;
            } else {
                n2 = n2 % n1;
            }
        }
        if (n1 == 0)
            return n2;
        else
            return n1;
    }
};

// Time Complexity: O(log(min(N1, N2))) :
// where N1 and N2 are given numbers.
// In every iteration, the algorithm is dividing larger number with the smaller number resulting in time complexity.(approx.)

// Space Complexity: O(1)


        // bruteforce
        // int gcd = 1;
        // for (int i = 1; i <= min(n1, n2); i++) {
        //     if (n1 % i == 0 & n2 % i == 0) {
        //         gcd = max(gcd, i);
        //     }
        // }
        // return gcd;

// Time Complexity: O(min(N1, N2)) :
// where N1 and N2 are given numbers. 
// Iterating from 1 to min(N1, N2) and performing constant time operations in each iteration.
// Space Complexity: O(1)         