#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back


void solve(){
  ll n ; cin >> n;
 
  ll aa[n];
  vector<vector<ll>>v;
  for(ll i=0;i<n;i++){
    cin >> aa[i];
    v.pb({aa[i],i+1});
  }
  ll ans = 0;
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
    if(v[i][0]*v[j][0]>=2*n) break;
     if(v[i][0]*v[j][0]==v[i][1]+v[j][1]) ans++;
   }
  }
  cout << ans <<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}