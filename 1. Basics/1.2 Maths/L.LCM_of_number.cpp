/*Question - 12 : LCM of two numbers
You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. 
Return the LCM of the two numbers.

Lowest Common Multiple (LCM):
The LCM of two integers is the lowest positive integer that is divisible by both the integers.

Time Complexity: O(log(min(N1, N2))) – Finding GCD of two numbers, along with some constant time opeations
Space Complexity: O(1)

code:
*/
class Solution {
   public:
    int LCM(int n1, int n2) {
        // for(int i = 1; i <= n1*n2; i++)
        // {
        //     if(i%n1 == 0 && i%n2 == 0)
        //     return i;
        // }
        // return n1*n2;

        //** optimized

        return (n1 * n2) / GCD(n1, n2);
    }

    int GCD(int n1, int n2) {
        while (n1 > 0 && n2 > 0) {
            if (n1 > n2)
                n1 = n1 % n2;
            else
                n2 = n2 % n1;
        }
        if (n1 == 0) return n2;
        return n1;
    }
};