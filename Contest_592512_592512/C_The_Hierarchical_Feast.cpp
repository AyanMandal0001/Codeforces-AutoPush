#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2005;
vector<int> adj[MAX_N];  
vector<int> depth(MAX_N, -1); 


void dfs(int u, int d) {
    depth[u] = d;
    for (int v : adj[u]) {
        if (depth[v] == -1) {  
            dfs(v, d + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
   
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        if (p[i] != -1) {
            adj[p[i]].push_back(i);  
        }
    }
    
  
    int max_depth = 0;
    for (int i = 1; i <= n; i++) {
        if (p[i] == -1 && depth[i] == -1) { 
            dfs(i, 0);
        }
    }
    
    
    for (int i = 1; i <= n; i++) {
        max_depth = max(max_depth, depth[i]);
    }
    
    cout << max_depth + 1 << endl;
    
    return 0;
}