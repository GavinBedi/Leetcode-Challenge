class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        int i,s=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
            v.push_back(nums[i]);
            break;
            }
        }
        int cnt=1;
      for(i=0;i<n;i++)
      {
        if(cnt==nums[i])
        cnt++;
      }
      v.push_back(cnt);
      return v;
    }
};