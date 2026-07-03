//brute force approach
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=nums.size()-1;i>0;i--){
               if(nums[i]!=nums[i-1]) return nums[i-1];
       }
      return -1;
    }
};

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int largest=nums[nums.size()-1];
       int secondLargestElement=-1;
       for(int i=nums.size()-2;i>=0;i--){
               if(nums[i]!=largest) {
                secondLargestElement=nums[i];
                break;
       }
       }
      return secondLargestElement;
    }
};

//better approach
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest=nums[0];
        int secondLargest=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=largest && nums[i]>secondLargest){
                secondLargest=nums[i];
            }
        }
        return secondLargest;
    }
};

//optimal approach:
class Solution {    
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int secondLargest = -1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
            } 
            else if (nums[i] != largest && nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }
        return secondLargest;
    }
};
