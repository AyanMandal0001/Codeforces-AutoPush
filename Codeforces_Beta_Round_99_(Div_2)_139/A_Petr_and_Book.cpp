#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
  int n;
    cin >> n;
    vector<int> days(7);
    for (int i = 0; i < 7; ++i) {
        cin >> days[i];
    }
    int day = 0;
    while (n > 0) {
        n -= days[day];
        if (n <= 0) {
            break;
        }
        day = (day + 1) % 7;
    }
    cout << day + 1 << endl; 
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  //  int tt; cin>>tt;while(tt--)
         solve();
}