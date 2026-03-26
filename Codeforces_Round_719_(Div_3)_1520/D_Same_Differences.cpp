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
 ll n ;cin >>n; ll ans = 0;
 map<ll,ll>mp;
 ll aa[n]; for(ll i=0;i<n;i++){
    cin>>aa[i];
    mp[aa[i]-(i+1)]++;
}
for(auto it=mp.begin();it!=mp.end();it++){
    ll cnt = it->second;
     ans += cnt*(cnt-1)/2;
}
cout<<ans<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}