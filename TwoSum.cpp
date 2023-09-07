#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum1(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndices;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndices.find(complement) != numIndices.end()) {
            return {numIndices[complement], i};
        }
        numIndices[nums[i]] = i;
    }
    return {};
}
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::vector<int> result = twoSum1(nums, target);
 return {result};
    }
};
