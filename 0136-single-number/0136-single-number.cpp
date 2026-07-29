class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,s=0;
     for(i=0;i<nums.size();i++)
        s=s^nums[i];
     return s;  
    }
};