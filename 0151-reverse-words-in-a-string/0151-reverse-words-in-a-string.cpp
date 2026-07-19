class Solution {
public:
    string reverseWords(string s) {
    int i,l;
    string s1="",s2="";
    vector<string> v;
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
        s1=s1+s[i];
        else
        {
            if (!s1.empty()) 
            {
            v.push_back(s1);
            s1="";
        }}
    }
    if (!s1.empty())
        v.push_back(s1);
    reverse(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        
    s2=s2+v[i];
    if(i!=v.size()-1)
    s2=s2+" ";
    }

    return s2;
    }
};