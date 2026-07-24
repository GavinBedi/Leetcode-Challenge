class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    vector<int> v;
    int n=nums.size();
    int i;
      int ans = nums[0] + nums[1] + nums[2];
    for(i=0;i<n;i++)
    {
        if(i>0&&nums[i]==nums[i-1])
        continue;
        int l=i+1,r=n-1;
        while(l<r)
        {
           if(abs(nums[i]+nums[l]+nums[r]-target)<abs(ans-target))
           ans=nums[i]+nums[l]+nums[r];
if(nums[i]+nums[l]+nums[r]<target)
   l++;
   else if(nums[i]+nums[l]+nums[r]>target)
   r--;
   else
return target;
  }}
return ans;
    }


 

};