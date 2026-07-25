class Solution {
public:
    int maxProduct(int n) {
        int d;
        vector<int> v;
        while(n!=0)
        {
            d=n%10;
            v.push_back(d);
            n=n/10;
        }
        sort(v.begin(),v.end());
        return v[v.size()-1]*v[v.size()-2];
    }
};