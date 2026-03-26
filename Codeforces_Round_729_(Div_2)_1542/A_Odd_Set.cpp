#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
  int n ; cin >> n;
  int od = 0,ev=0;
  for(int i=0;i<2*n;i++){
     int x; cin >> x;
        if(x%2) od++;
        else ev++;
  }
  if(od == n and ev == n) cout << "Yes" << endl;
  else cout << "No" << endl;
} 
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}