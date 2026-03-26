#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

 vector<pair<ll,ll>> Factors(ll x) {
vector<pair<ll,ll>> ans;
  ll t = x;
  for(ll i = 2; i * i <= t; i++) {
    if(x % i == 0) {
      ll cnt = 0;
       while(x % i==0) {cnt++;x/= i;}
       ans.push_back({i, cnt});
     }
    }
 if(x > 1) ans.push_back({x, 1});
 return ans;
 }
void solve(){
    ll n ; cin >>n; ll arr[n];
  map<ll,ll>mp;
  map<ll,ll>mpp;
  for(ll i=0;i<n;i++){ cin >> arr[i]; mp[arr[i]]++;}
for(auto it=mp.begin();it!=mp.end();it++){
  ll ele = it->first ; ll f = it->second;
   vector<pair<ll,ll>>v=Factors(ele);
   for(ll i=0;i<v.size();i++){
     ll p = v[i].first ; ll pf = v[i].second;
      mpp[p]+=pf*f;
   }
  }

  for(auto it=mpp.begin();it!=mpp.end();it++){
     ll f = it->second;
     if(f%n!=0) { cout <<"NO"<< endl; return;   }
   }
    cout <<"YES"<< endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}