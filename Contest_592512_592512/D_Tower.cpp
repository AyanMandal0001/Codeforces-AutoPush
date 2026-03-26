#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;

// Calculate minimum operations to transform height 'a' to target height 't'
long long calculateOperations(long long a, long long t) {
    if (a == t) return 0;
    if (a < t) return t - a;
    
    // If a > t, we have two choices:
    // 1. Decrement until we reach t
    // 2. Divide by 2 (possibly multiple times) and then adjust
    
    long long ops = LLONG_MAX;
    long long div_ops = 0;
    long long current = a;
    
    // Try all possible combinations of divisions followed by adjustments
    while (current > 0) {
        long long adjust = abs(current - t);
        ops = min(ops, div_ops + adjust);
        
        current /= 2;
        div_ops++;
        
        // If we've already found a better solution than continuing with divisions
        if (div_ops + abs(current - t) >= ops) break;
    }
    
    return ops;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    
    if (n - m == 1) {
        cout << "0\n";
        return;
    }
    
   
    set<long long> potential_targets;
    for (long long h : heights) {
        while (h > 0) {
            potential_targets.insert(h);
            h /= 2;
        }
    }
    
    long long ans = LLONG_MAX;
    
   
    for (long long target : potential_targets) {
        vector<long long> operations;
        
        for (long long height : heights) {
            operations.push_back(calculateOperations(height, target));
        }
        
       
        sort(operations.begin(), operations.end());
        
       
        long long totalOps = 0;
        for (int j = 0; j < n - m; j++) {
            totalOps += operations[j];
        }
        
        ans = min(ans, totalOps);
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}