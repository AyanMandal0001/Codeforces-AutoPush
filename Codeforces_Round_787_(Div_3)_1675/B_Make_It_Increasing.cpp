#include <bits/stdc++.h>
using namespace std;

#define endl '\n'


// *******************************************************************************//

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
      int op = 0;
     for(int i=n-2;i>=0;i--){
        while(arr[i] >= arr[i+1] && arr[i] > 0){ // if a[i]==0 there is no point of checking
            arr[i] /= 2; // same as floor
            op++;
        }
        if(arr[i] == arr[i+1]){
            cout<< -1 <<endl;
            return;
        }
     }
      cout << op << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}