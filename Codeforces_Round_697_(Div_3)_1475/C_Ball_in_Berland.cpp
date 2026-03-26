#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
 ll a,b,k; cin >>a>>b>>k;
 ll ans = k*(k-1)/2;
 map<ll,vector<ll>>mpb;
 map<ll,vector<ll>>mpg;
 vector<pair<ll,ll>>v(k);
 for(ll i=0;i<k;i++){
    ll boys ; cin >>boys;
    v[i].first = boys;
 }
 for(ll i=0;i<k;i++){
    ll girls ; cin >>girls;
    v[i].second = girls;
 }
 for(ll i=0;i<k;i++){
    mpb[v[i].first].pb(v[i].second);
    mpg[v[i].second].pb(v[i].first);
 }
 for(auto it=mpb.begin();it!=mpb.end();it++){
    ll f = it->second.size();
    ans -= f*(f-1)/2;
 }
 for(auto it=mpg.begin();it!=mpg.end();it++){
      ll f = it->second.size();
      ans -= f*(f-1)/2;
 }
 cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}