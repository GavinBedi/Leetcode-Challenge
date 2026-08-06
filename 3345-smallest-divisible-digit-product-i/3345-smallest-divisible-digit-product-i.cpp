class Solution {
public:
    int smallestNumber(int n, int t) {
        int d,n1,pro=1,k=10;
        while(k!=0)
        {
            int n1=n;
            while(n1!=0)
            {
                d=n1%10;
                pro=pro*d;
                n1=n1/10;
            }
            if(pro%t==0)
            break;
            else
            n++;
            k--;
            pro=1;

        }
        return n;
    }
};