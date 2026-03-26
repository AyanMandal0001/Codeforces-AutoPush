#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n, k, x;
    cin >> n >> k >> x;

    // Calculate the sum of the first k natural numbers
    long long int min_sum = (k * (k + 1)) / 2;

    // Calculate the sum of the first k terms of the sequence starting from n
    long long int max_sum = k * n - (k * (k - 1)) / 2;

    if (x >= min_sum && x <= max_sum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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
}