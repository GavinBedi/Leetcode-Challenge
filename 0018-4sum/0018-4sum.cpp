class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> v;
        int i,j;
        for(i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            for(j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                continue;
                int l=j+1,r=n-1;
                while(l<r)
                {
                    long long sum=1LL*nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target)
                    {
                    v.push_back({nums[i],nums[j],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]==nums[l-1])l++;
                    while(l<r && nums[r]==nums[r+1])r--;
                    }
                    else if(sum<target)
                    l++;
                    else
                    r--;
                }
            }
        }
        return v;
    }
};