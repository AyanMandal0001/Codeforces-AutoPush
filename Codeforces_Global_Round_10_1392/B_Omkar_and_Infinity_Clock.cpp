#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int mx = INT_MIN;
    int mi = INT_MAX;
      int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx,a[i]);
        mi = min(mi,a[i]);
    }
    if(k%2){
       for (int i = 0; i < n; i++) {
        cout <<mx- a[i] << " ";
    }
    cout <<"\n";
    return;
    }
    else{ 
         int maxi = INT_MIN;
           for (int i = 0; i < n; i++) {
            a[i]=mx- a[i];
         maxi = max(a[i],maxi);
          }
          for (int i = 0; i < n; i++) {
         cout <<maxi-a[i]<<" ";
          }
          cout << "\n";
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
