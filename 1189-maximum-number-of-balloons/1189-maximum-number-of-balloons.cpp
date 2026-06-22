class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int i,x=0;
        map<char,int> mp;
        for(i=0;i<text.size();i++)
        {
            if(text[i]=='b'||text[i]=='a'||text[i]=='l'||text[i]=='l'||text[i]=='o'||text[i]=='o'||text[i]=='n')
         mp[text[i]]++;
        }
        int ans=INT_MAX;
      
       ans = min(ans, mp['b']);
        ans = min(ans, mp['a']);
        ans = min(ans, mp['l'] / 2);
        ans = min(ans, mp['o'] / 2);
        ans = min(ans, mp['n']);

      return ans;

    }
};