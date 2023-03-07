set<int> visited;

void bfs(int node, vector<vector<int>>& graph) {
    queue<int> nextToVisit;
    nextToVisit.push(node);
    visited.emplace(node);

    while (!nextToVisit.empty()) {
        int current_node = nextToVisit.front();
        cout << current_node << " ";
        visited.emplace(current_node);
        nextToVisit.pop();
        for (auto child: graph[current_node]) {
            if (visited.find(child) == visited.end()) {
                visited.emplace(child);
                nextToVisit.push(child);
            }
        }
    }
}