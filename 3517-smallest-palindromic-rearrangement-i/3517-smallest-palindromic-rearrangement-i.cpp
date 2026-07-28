class Solution {
public:
    string smallestPalindrome(string s) {
       int l=s.size();
       int i;
       sort(begin(s),begin(s)+(l/2));
       for(i=0;i<l/2;i++)
       s[l-1-i]=s[i];
       return s;

    }
};