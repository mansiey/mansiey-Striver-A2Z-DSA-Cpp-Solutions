/*Question - 13 : Divisors of a Number
You are given an integer n. You need to find all the divisors of n. 
Return all the divisors of n as an array or list in a sorted order.

A number which completely divides another number is called it's divisor.

Time Complexity: O(N) – Iterating N times, and performing constant time operations in each pass.
Space Complexity: O(sqrt(N)) – A number N can have at max 2*sqrt(N) divisors, which are stored in the array.

code:
*/
class Solution {
   public:
    vector<int> divisors(int n) {
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};