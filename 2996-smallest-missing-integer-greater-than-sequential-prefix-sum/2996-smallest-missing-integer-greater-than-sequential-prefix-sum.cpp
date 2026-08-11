class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int s=nums[0],n,i,p=-1;
     n=nums.size();

        for(i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]+1)
            s=s+nums[i];
            else
            break;
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            if(nums[i] == s)
            s++;
        }
        return s;
    }
};