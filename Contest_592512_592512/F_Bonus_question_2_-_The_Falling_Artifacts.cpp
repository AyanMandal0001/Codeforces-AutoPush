#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    
    for (int j = 0; j < m; j++) {
        int next_pos = n - 1;  
        
        for (int i = n - 1; i >= 0; i--) {
            if (grid[i][j] == 'o') {
               
                next_pos = i - 1;
            } else if (grid[i][j] == '*') {
               
                grid[i][j] = '.';  
                grid[next_pos][j] = '*';  
                next_pos--; 
            }
        }
    }

   
    for (int i = 0; i < n; i++) {
        cout << grid[i] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        if (t > 0) cout << endl;
    }
    return 0;
}