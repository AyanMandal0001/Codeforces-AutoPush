#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
  ll n,m;
ll check(ll x,map<ll,ll>&mp){
  vector<ll>timeleft(n+1,x);
  ll rem=0;
  for(auto it=mp.begin();it!=mp.end();it++){
   ll val=it->first;
   ll f=it->second;
    if(x>=f) {
      timeleft[val] -= f;
    }
    else{
      rem += f-x;
      timeleft[val] -= x;
    }
  }
  for(ll i=1;i<=n;i++){
   if(timeleft[i]!=0) {
      ll task=timeleft[i]/2;
      rem -= min(rem,task);
   }
  }
  return rem==0;
}
void solve(){
 cin >>n>>m;
 map<ll,ll>mp;
 for(ll i=1;i<=m;i++){
    ll x ; cin >> x;
    mp[x]++;
 }
 ll lo=0,hi=1e9;
 ll ans=-1;
 while(lo<=hi){
   ll mid=(lo+hi)/2;
   if(check(mid,mp)){
      ans = mid;
      hi =mid-1;
   }
   else{
      lo=mid+1;
   }
 }
 cout<<ans<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}