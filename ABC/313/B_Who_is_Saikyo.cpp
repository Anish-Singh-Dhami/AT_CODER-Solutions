#include <bits/stdc++.h>
using namespace std;

int dfs(vector<int> adj[], int src, vector<bool> &visited) {
    int cnt = 1;
    visited[src] = true;
    for(auto &it : adj[src]) {
        if(!visited[it]) cnt += dfs(adj, it, visited);
    }
    return cnt;
}   

int main(){

    int n, m; cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i = 1; i <= n; i++) {
        vector<bool> visited(n+1, false);
        int cnt = dfs(adj, i, visited);
        if(cnt == n) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}