#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    
    long long st = max(1LL, n - k + 1);//Imp line
    long long final = n;

   
    long long leaves = (final * (final + 1)) / 2 - ((st - 1) * st) / 2;

   
    if (leaves % 2 == 0) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}
