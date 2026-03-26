#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mini = INT_MAX;
    long long product = 1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mini = min(a[i], mini);
    }

    bool incremented = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == mini && !incremented) {
            a[i] += 1;
            incremented = true;
        }
        product = (product * a[i]) % MOD;
    }

    cout << product << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t ; 
    while(t--){
        solve();

    }
    return 0;
}