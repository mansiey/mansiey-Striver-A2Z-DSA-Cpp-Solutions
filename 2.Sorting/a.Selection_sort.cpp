/* Question - 1: SELECTION SORT
Given an array of integers nums, sort the array in non-decreasing order using the 
selection sort algorithm and return the sorted array.

Time Complexity: O(n²)
Space Complexity: O(1)

Code:
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int minValueIndex = i;
            for (int j = i + 1; j <= n - 1; j++) {
                if (nums[j] < nums[minValueIndex]) {
                    minValueIndex = j;
                }
            }
            if (minValueIndex != i) {
                swap(nums[i], nums[minValueIndex]);
            }
        }
        return nums;
    }
};
