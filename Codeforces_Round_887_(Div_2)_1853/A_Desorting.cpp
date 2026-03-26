#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isSorted(const vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (isSorted(a) == 0) {
        cout << 0 << endl;
    } else {
        int mini = INT_MAX;
        for (int i = 1; i < n; i++) {
            mini = min(mini, a[i] - a[i - 1]);
        }     
            cout << mini/2 + 1 << endl;
    } 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}
