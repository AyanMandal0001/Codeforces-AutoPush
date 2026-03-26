#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    long long sum = 0LL;
    long long mini = 0LL;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        // mini += (arr[i] + x - 1) / x; 
        mini += ceil((double)arr[i] / x); 
        sum += arr[i];
    }

    // long long maxi = (sum + x - 1) / x; 
    long long maxi = ceil((double)sum / x);

    cout << maxi << " " << mini << endl;
}

signed main() {
    int tt = 1;
    cin >> tt;
    for (int i = 0; i < tt; i++) {
        solve();
    }
    return 0;
}