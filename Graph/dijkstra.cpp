set<int> visited;

void dijk(int source, vector<vector<pair<int, int>>>& graph) {
    int n = graph.size();
    vector<int> dist(n, INF), pre(n, -1);
    // cost, node
    priority_queue<pair<int, int>> nextToVisit;

    dist[source] = 0;
    pre[source] = source;
    nextToVisit.push({0, source});

    while (!nextToVisit.empty()) {
        int node = nextToVisit.top().second;
        nextToVisit.pop();
        if (visited.find(node) != visited.end())
            continue;
        visited.emplace(node);
        for (auto edge: graph[node]) {
            int target = edge.first;
            int cost = edge.second;
            if (dist[node] + cost < dist[target]) {
                dist[target] = dist[node] + cost;
                pre[target] = node;
                nextToVisit.push({-dist[target], target});
            }
        }
    } 
}