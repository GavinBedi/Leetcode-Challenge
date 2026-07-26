class Solution {
public:
    int lengthOfLastWord(string s) {
 

        int i,x=0,p;
        
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
         p=i;
            break;
            }
        }
         for(i=p;i>=0;i--)
        {
            if(s[i]==' ')
            break;
         x++;
            
        }
        return x;
    }
};