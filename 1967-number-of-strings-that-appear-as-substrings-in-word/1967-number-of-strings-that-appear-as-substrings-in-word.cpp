class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int i,x=0;
        for(i=0;i<patterns.size();i++)
        {
            if(word.find(patterns[i])!=string::npos)
            x++;
        }
        return x;
    }
};