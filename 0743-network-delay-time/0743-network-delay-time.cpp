class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
vector<int> dist(n+1,1e9);
int i;   
dist[k]=0;
pq.push({0,k});
    vector<vector<pair<int,int>>> adj(n+1);
        
        for(auto x:times){
            int u=x[0];
            int v=x[1];
            int w=x[2];
            adj[u].push_back({v,w});
           
            
        }
        while(!pq.empty())
        {
            int dista=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it:adj[node])
            {
                int edgeweight=it.second;
                int adjnode=it.first;
                if(dista+edgeweight<dist[adjnode])
                {
                    dist[adjnode]=dista+edgeweight;
                    pq.push({dist[adjnode],adjnode});
                }}}
            int ans=0;
            for(int i=1;i<=n;i++){
            if(dist[i]==1e9) return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};