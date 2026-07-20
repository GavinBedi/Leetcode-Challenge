class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int i,j;
        vector<int> v;
        vector<vector<int>> grid1(m,vector<int> (n));
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
        v.push_back(grid[i][j]);
    }}
    int x=v.size();
    k %= x;
  reverse(v.begin(),v.end());
  reverse(v.begin(),v.begin()+k);
  reverse(v.begin()+k,v.end());
  int l=0;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
        grid1[i][j]=v[l++];
    }
  }
  return grid1;
      
    }
};