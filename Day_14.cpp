//Increasing Triplet Subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       int a=INT_MAX,b=INT_MAX;
       for(int i:nums){
           if(i<a)
           a=i;
           else if(a<i&&i<b)
           b=i;
           else if(b<i)
           return true;
       } 
       return false;
    }
};
