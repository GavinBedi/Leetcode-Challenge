class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int i,s=0;
        for(i=0;i<n;i++)
       s=s+((i/8)+1);
       return s;
    }
};