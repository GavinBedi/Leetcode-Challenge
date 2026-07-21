class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
         
        vector<vector<pair<int, double>>> adj(n);

        // Build graph
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            double p = succProb[i];

            adj[u].push_back({v, p});
            adj[v].push_back({u, p});
        }

        // Max Heap {probability, node}
        priority_queue<pair<double, int>> pq;

        vector<double> prob(n, 0.0);

        prob[start_node] = 1.0;
        pq.push({1.0, start_node});

        while (!pq.empty()) {

            double currProb = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Ignore outdated entries
            if (currProb < prob[node])
                continue;

            // Early exit
            if (node == end_node)
                return currProb;

            for (auto &it : adj[node]) {
                int adjNode = it.first;
                double edgeProb = it.second;

                if (currProb * edgeProb > prob[adjNode]) {
                    prob[adjNode] = currProb * edgeProb;
                    pq.push({prob[adjNode], adjNode});
                }
            }
        }

        return 0.0;
    }
};