//Remove Duplicates from a sorted array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
        if(nums.size()==0) return 0;
        int r=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]) 
                nums[r++]=nums[i];
        }
        return r;
    }
};
