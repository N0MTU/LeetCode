#include <vector>
#include <iostream>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
         int k = 1;
    int x = nums.size();
//loop through nums, removing duplicates as array is already sorted
    for (int i = 1; i < x; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
    }  
};
