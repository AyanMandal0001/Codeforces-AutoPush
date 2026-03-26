#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
 ll n,m;cin>>n>>m;
 vector<vector<ll>>v(n,vector<ll>(m));
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin >>v[i][j];
    }
  }
  ll ans = 0;
  for(ll j=0;j<m;j++){
       vector<ll>t;
        for(ll i=0;i<n;i++){
        t.pb(v[i][j]);
      }
      sort(t.begin(),t.end());
      ll k = t.size();
      vector<ll>suf(k);
      suf[k-1]=t[k-1];
      for(ll i=k-2;i>=0;i--) suf[i]=suf[i+1]+t[i];
      for(ll i=0;i<k-1;i++){
        ans += abs(t[i]*(k-1-i) - suf[i+1]); 
      }
  }
  cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}