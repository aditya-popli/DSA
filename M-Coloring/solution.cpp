class Solution {
  public:
    // Check if it's safe to color vertex `node` with color `c`
    bool isSafe(int node, vector<int> &color, vector<vector<int>> &adj, int c) {
        for (int neighbor : adj[node]) {
            if (color[neighbor] == c)
                return false;
        }
        return true;
    }

    // Backtracking function to try assigning colors
    bool solve(int node, vector<vector<int>> &adj, vector<int> &color, int m, int V) {
        if (node == V) return true; // All vertices colored

        for (int c = 1; c <= m; c++) {
            if (isSafe(node, color, adj, c)) {
                color[node] = c;
                if (solve(node + 1, adj, color, m, V))
                    return true;
                color[node] = 0; // Backtrack
            }
        }
        return false;
    }

    // Main function to check if graph can be colored with at most m colors
    bool graphColoring(int V, vector<vector<int>> &edges, int m) {
        vector<vector<int>> adj(V);

        // Build adjacency list from edge list
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> color(V, 0); // 0 means no color assigned
        return solve(0, adj, color, m, V);
    }
};
