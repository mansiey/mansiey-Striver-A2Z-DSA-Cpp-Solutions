/* Question - 2: INSERTION SORT
Given an array of integers called nums,
sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.

NOTE:
takes an element and places it in the correct order.
we keep on increasing the sixe of the array from 1 to n, and check if the elements are in the correct order.


Time Complexity: O(n²) -> if the array is already sorted, O(n) 
Space Complexity: O(1)

Code:
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
      
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j > 0 && nums[j] < nums[j - 1]) {
                swap(nums[j], nums[j - 1]);
                j--;  
            }
        }
        return nums;
    }
};
