class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        int i;
        vector<int> v;
        for(i=0;i<arr.size();i++)
        mp[arr[i]]++;
        for(auto it:mp)
        v.push_back(it.second);
        sort(v.begin(),v.end());
        for(i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
            return 0;
        }
        return 1;
    }
};