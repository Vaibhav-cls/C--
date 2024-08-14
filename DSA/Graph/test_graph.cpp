#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    unordered_map<int, list<int>> adj;

public:
    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void prepareAdjList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> &edges)
    {
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i].first;
            int v = edges[i].second;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
    {
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            ans.push_back(frontNode);

            for (auto i : adjList[frontNode])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
    vector<int> BFS(int vertex, vector<pair<int, int>> edges)
    {
        unordered_map<int, list<int>> adjList;
        vector<int> ans;
        unordered_map<int, bool> visited;
        prepareAdjList(adjList, edges);

        // traverse all componenets
        for (int i = 0; i < vertex; i++)
        {
            if (!visited[i])
            {
                bfs(adjList, visited, ans, i);
            }
        }
        return ans;
    }
    void printAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n, e;
    cout << "Enter nodes: ";
    cin >> n;
    cout << "Enter edges: ";
    cin >> e;
    Graph G;
    vector<pair<int, int>> edges;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        G.addEdge(u, v, 0);
        edges.push_back(make_pair(u, v));
    }
    // G.printAdj();
    vector<int> ans = G.BFS(n, edges);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}