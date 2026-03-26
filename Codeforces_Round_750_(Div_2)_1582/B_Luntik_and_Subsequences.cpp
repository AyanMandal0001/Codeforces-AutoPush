#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    long long cnt0 = 0, cnt1 = 0,sum =0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) cnt0++;
        if (arr[i] == 1) cnt1++;
        sum += arr[i];
    }

    // Calculating 2^cnt0 using bitwise shift bcz if we do pow(2,cnt0) ans is coming in scientific format like 5.36871e+008
    if(sum > 0){
        long long powerOfTwo = 1LL << cnt0;

        // ans  = cnt1 * (2 ^ cnt0)
        cout << cnt1 * powerOfTwo << endl;
    }
   else {
    cout << 0 << endl;
   }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    cin >> tt;
    for (int i = 0; i < tt; i++) {
        solve();
    }
    return 0;
}