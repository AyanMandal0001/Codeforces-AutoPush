#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll mod = 1e9+7;

void solve(){
 ll n ; cin >> n;
 vector<vector<ll>>v(n,vector<ll>(2,mod));
 for(ll i=0;i<n;i++){
    ll m ; cin>>m;
    for(ll j=0;j<m;j++){
        ll x; cin>>x;
        if(x<v[i][0]){ v[i][1]=v[i][0];v[i][0]=x;}
        else if(x<v[i][1]){ v[i][1]=x;}
        else continue;
    }
 }
 ll tot = 0;
 ll mini = LLONG_MAX;
  for(ll i=0;i<n;i++){
  sort(v[i].begin(),v[i].end());
  tot += v[i][1];
  if(v[i][0]<mini){
    mini = v[i][0];
  }
 }
  ll ans=LLONG_MIN;
   for(ll i=0;i<n;i++){
     ans = max(ans,tot-v[i][1]+mini);
 }
 cout << ans << endl;
//  for(ll i=0;i<n;i++){
//    for(ll j=0;j<v[i].size();j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout << endl;
//   }
 }
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}