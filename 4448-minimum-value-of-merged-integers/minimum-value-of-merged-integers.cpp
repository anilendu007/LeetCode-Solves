class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size()-1;
        int mergedMinimum = std::stoi(std::to_string(nums[0]) + std::to_string(nums[1]));
        for(int i = 0; i < n; i+=2){
            int minimum = std::stoi(std::to_string(nums[i]) + std::to_string(nums[i+1]));
            if(minimum < mergedMinimum){
                mergedMinimum = minimum;
            }
        }
        return mergedMinimum;
    }
};