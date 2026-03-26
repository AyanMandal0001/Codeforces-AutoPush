#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

// *******************************************************************************//
void solve(){
 ll n ; cin >> n;
   if( n <= 3){
    cout<< 1 << endl;
    return ;
   }
   ll ans = 1;
     while( n > 3){
        ans *= 2;
        n /= 4;
     }
    cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}