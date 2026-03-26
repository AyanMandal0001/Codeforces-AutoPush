#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
ll mod = 1e9+7;

void solve(){
 ll a,b,c,d;cin >> a >> b >> c >> d;
  ll ans = b ;
  ll rem = a - b;
  if(rem <= 0 ){
    cout << ans << endl;return;
  }
  if(rem && d >= c) {
    cout << -1 << endl; return;
  }
  ans += c*((rem+c-d-1)/(c-d));
  cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}