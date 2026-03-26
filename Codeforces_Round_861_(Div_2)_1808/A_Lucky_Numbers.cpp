#include <bits/stdc++.h>
using namespace std;

int digitDifference(int n) {
    int largest = INT_MIN, smallest = INT_MAX;
    while (n > 0) {
        int digit = n % 10;
        largest = max(largest, digit);
        smallest = min(smallest, digit);
        n /= 10;
    }
    return largest - smallest;
}

void solve() {
    int l, r;
    cin >> l >> r;
    int maxDiff = INT_MIN, index = -1;
    for (int i = l; i <= r; i++) {
        int diff = digitDifference(i);
        if (diff > maxDiff) {
            maxDiff = diff;
            index = i;
        }
//If the maximum possible difference is found, break early
// This will reduce time complexity
        if (maxDiff == 9) {
            break;
        }
    }
    cout << index << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
