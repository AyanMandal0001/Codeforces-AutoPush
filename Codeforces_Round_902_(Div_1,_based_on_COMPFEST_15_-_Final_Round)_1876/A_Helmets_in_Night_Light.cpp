#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

// *******************************************************************************//
void solve(){
 ll n , p ; cin >> n >> p;
 ll ans = n*p;
  vector<vector<ll>>v(n,vector<ll>(2));
 for(ll i=0;i<n;i++){
    cin >>v[i][1];//num
 }
 for(ll i=0;i<n;i++){
    cin >> v[i][0];//cost
 }
 sort(v.begin(),v.end());
  ll rem = n-1;
  ll cur = p;//current cost
//  cout << rem <<" "<<cur<< endl;
  for(ll i=1;i<n;i++){
    if(rem<=0||v[i-1][0]>p) break;
    ll t = min(v[i-1][1],rem);
      cur += t*v[i-1][0];
      rem -= t;
     // cout<<t<<" " << rem <<" "<<cur<< endl;
  }
  if(rem>0) cur += rem*p;
  cout << min(ans,cur) << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}