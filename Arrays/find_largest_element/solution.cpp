#include <vector>

class Solution {
public:
    int largestElement(std::vector<int>& nums) {
        int max = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max) max = nums[i];
        }
        return max;
    }
};