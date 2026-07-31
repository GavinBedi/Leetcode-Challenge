class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> mp;
        int i;
        for(i=0;i<word.size();i++)
        mp[word[i]]++;
        vector<int> freq;
        for(auto it:mp)
        freq.push_back(it.second);

        sort(freq.begin(),freq.end(),greater<>());
        int n=freq.size();
        int s=0;
      for(i=0;i<n;i++)
      {
        s=s+freq[i]*((i/8)+1);
   
      }
        return s;
    }
};