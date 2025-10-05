/*
 * Striver A2Z DSA Solutions - Array Problems
 * Author: Mansi Singh
 * Description: Solutions to selected array questions from Striver's A2Z DSA Sheet.
 * Platform-independent C++ code. Each function implements only the logic; 
 * input/output is handled by the platform/editor.
 */

#include <iostream>
using namespace std;

/* 
 * Question 1: Sum of Array Elements
 * Given an array arr of size n, find the sum of all elements in the array.
 */
class Solution {
public:
    int sum(int arr[], int n) {
        int total = 0; // variable to store sum of elements
        for (int i = 0; i < n; i++) {
            total += arr[i]; // add each element to total
        }
        return total;
    }
};

/* 
 * Question 2: Count of Odd Numbers in Array
 * Given an array of n elements, return the count of odd numbers in the array.
 */
class SolutionOdd {
public:
    int countOdd(int arr[], int n) {
        int count = 0; // variable to track odd numbers
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) { // check if element is odd
                count++;
            }
        }
        return count;
    }
};

// Question 3 : Check if the Array is Sorted I
//Given an array arr of size n, the task is to check if the given array is sorted in (Increasing / Non-decreasing) order. 
//If the array is sorted then return True, else return False.
//code:

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i = 1; i < n; i++)
        {
            if(arr[i] < arr[i-1]) 
                return false;
        }
        return true;
    }
};

// Question 4: Reverse an array
//Given an array arr of n elements. The task is to reverse the given array. 
//The reversal of array should be inplace.


