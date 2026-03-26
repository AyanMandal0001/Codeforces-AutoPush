#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 ll n,k1,k2;
 
void solve(){
cin >>n>>k1>>k2;
 ll aa[n],bb[n];
 priority_queue<ll>pq;
 for(ll i=0;i<n;i++) cin >>aa[i];
 for(ll i=0;i<n;i++) cin >>bb[i];
  for(ll i=0;i<n;i++){ pq.push(abs(aa[i]-bb[i]));}
 
  ll op=(k1+k2);
  while(op>0 && pq.top()!=0){
    ll val = pq.top(); pq.pop();
    op--;
    pq.push(val-1);
  }
  if(op){
    ll ans ;
    if(op%2) ans = 1;
    else ans = 0;
    cout << ans << endl; 
    return;
  }
     ll ans = 0;
     while(!pq.empty()){
      ll val = pq.top();
       ans += val*val;
       pq.pop();
    }
    cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  //  ll tt; cin>>tt;while(tt--)
         solve();
}