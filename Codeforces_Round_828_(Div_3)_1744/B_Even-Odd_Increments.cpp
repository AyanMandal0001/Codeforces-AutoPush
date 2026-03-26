#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    long long sum = 0;
    vector<long long> a(n);
    int cnt_evenNo = 0, cnt_oddNo = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0) cnt_evenNo++;
        else cnt_oddNo++;
    }
    for (int j = 0; j < q; j++) {
        int type, x;
        cin >> type >> x;
        if (type == 0) {
            sum += cnt_evenNo * x;
            // If x is odd, all even numbers will become odd
            if (x % 2 != 0) {
                cnt_oddNo += cnt_evenNo;
                cnt_evenNo = 0;
            }
        } else {
            sum += cnt_oddNo * x;
            // If x is odd, all odd numbers will become even
            if (x % 2 != 0) {
                cnt_evenNo += cnt_oddNo;
                cnt_oddNo = 0;
            }
        }
        cout << sum << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
