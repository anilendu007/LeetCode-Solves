#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int n = nums.size();
        // Create a vector of pairs: {number, original_index}
        std::vector<std::pair<int, int>> indexed_nums(n);
        for (int i = 0; i < n; i++) {
            indexed_nums[i] = {nums[i], i};
        }

        // Sort the pairs. This takes O(N log N) time!
        std::sort(indexed_nums.begin(), indexed_nums.end());

        // Now apply your exact two-pointer logic
        int left = 0;
        int right = n - 1;

        while (left < right) {
            int current_sum = indexed_nums[left].first + indexed_nums[right].first;

            if (current_sum == target) {
                // Return the original indices stored in the pairs
                return {indexed_nums[left].second, indexed_nums[right].second};
            } 
            else if (current_sum < target) {
                left++; 
            } 
            else {
                right--; 
            }
        }
        return {};
    }
};
