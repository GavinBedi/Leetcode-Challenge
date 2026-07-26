class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> v;
        int i,j,x=0;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==1)
                x++;
            }
            v.push_back(x);
            x=0;
        }
        return v;
    }
};