class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n1=nums.size();
        sort(nums.begin(),nums.end());
        int m=nums[0];
        int n=nums[n1-1];
        return gcd(m,n);
    }
};