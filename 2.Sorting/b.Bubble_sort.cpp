/* Question - 2: BUBBLE SORT
Given an array of integers called nums,
sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.

NOTE:
Push the maximum to the last position by adjacent swapping. 
keep on takin the 2 adjacent element and keep on pushing the max to the right.

Time Complexity: O(n²) -> if the array is already sorted, O(n) 
Space Complexity: O(1)

Code:
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        bool didswap = false;
        for(int i = n-1; i > 0; i--)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[j] > nums[j+1])
                {
                    swap(nums[j], nums[j+1]);
                    didswap = true;
                }
            }
            //if no swapping done, that is the array is already sorted.
            //break out of loop.
            if(!didswap){
                break;
            }
        }
        return nums;

    }
};
