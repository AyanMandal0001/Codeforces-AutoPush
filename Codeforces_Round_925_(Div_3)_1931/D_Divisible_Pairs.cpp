#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
  ll n ,x , y ; cin >> n >> x >> y;
  ll ans = 0;
  ll arr[n];
  map<ll,map<ll,ll>>mp;
  for(ll i=0;i<n;i++){
    cin >> arr[i];
    mp[arr[i]%y][arr[i]%x]++;
  }
 for(auto it0=mp.begin();it0!=mp.end();it0++){
   ll y_mod=it0->first;
    map<ll,ll> mpp=it0->second;
    for(auto it=mpp.begin();it!=mpp.end();it++){
     ll x_mod = it->first;
     ll f = it->second;
      if(x_mod>x-x_mod) continue;
     else if((x%2==0 && x_mod==x/2)||(x_mod==0)){ans += f*(f-1)/2;}
     else { ans += f * mpp[x-x_mod];} 
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