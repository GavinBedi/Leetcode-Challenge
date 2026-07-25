class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v;
        int i;
        int n=arr.size();
        for(i=0;i<n;i++)
     v.push_back(arr[i]);
     sort(v.begin(),v.end());
      unordered_map<int,int> mp;
      int rank =1;
      for(auto it:v)
      {
if(!mp.count(it))
mp[it]=rank++;
      }
      for(i=0;i<arr.size();i++)
      {
        arr[i]=mp[arr[i]];
      }
      return arr;
    }
};