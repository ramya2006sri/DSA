iterative:

class Solution{
public:
    int search(vector<int> &nums, int target){
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target)  return mid;
            else if(nums[mid]<target) left=mid+1;
            else right=mid-1;
        }
        return -1;
    }
};

recursive:

class Solution {
public:
    // Recursive Binary Search function
    int binarySearch(vector& nums, int low, int high, int target) {
        if (low > high) return -1; // Base case: target not found

        int mid = (low + high) / 2;

        if (nums[mid] == target) return mid;
        else if (target > nums[mid])
            return binarySearch(nums, mid + 1, high, target);
        else
        return binarySearch(nums, low, mid - 1, target);
    }

    int search(vector& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};
