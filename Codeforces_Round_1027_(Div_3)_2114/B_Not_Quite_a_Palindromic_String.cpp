#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
  int n , k ; cin >> n >> k;
    string s; cin >> s;
    int c0 = 0, c1 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') c0++;
        else c1++;
    }
    int unp = (n-2*k)/2;
    if(c0 >= unp && c1 >= unp and (c0-unp)%2==0 and (c1-unp)%2==0){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}