class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int i;
        int pos=0;
        int neg=1;
        vector<int> v(n);
        for(i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
         v[pos]=nums[i];
         pos=pos+2;
            }
            else
            {
                v[neg]=nums[i];
                neg=neg+2;
            }
          
        }
        return v;
    }
};