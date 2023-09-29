#include <bits/stdc++.h>
using namespace std;


// We know that the sum of the first n natural numbers formula is NSum = n*(n+1)/2;
//We can see from the question that in the array/vector from n natural numbers, one number is missing. 
// So, if we sum the numbers in vector and subtract from the NSum, we will get the missing number.

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int totalSum = 0;
    int n = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
        totalSum += nums[i];
    }

    int AllNSum = (n * (n + 1)) / 2;

    return AllNSum-totalSum;
    
    }
};
