#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
  int n , k ; cin >> n >> k; 
  int op = 0;
  if(n%2==1) {
     n -= k; 
     op++;
  }
  op +=  (n+k-2)/(k-1);
  cout << op << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}