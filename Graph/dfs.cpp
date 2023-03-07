set<int> visited;

void dfs(int node, vector<vector<int>>& graph) {
    cout << node << " ";
    visited.emplace(node);
    for (auto child: graph[node]) {
        if (visited.find(child) == visited.end())
            dfs(child, graph);
    }
}