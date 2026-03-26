#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
 int a, b ; cin >> a >> b; 
 int ans = 1e9;
   for(int addition=0;addition<32;addition++){
    int op = addition;
    int nb = b+addition;
    if(nb==1) continue;
    int na = a;
    while(na){
     na /= nb;
     op++;
    }
   ans = min(ans,op);
   }
   cout << ans <<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}