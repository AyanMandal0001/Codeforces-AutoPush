#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()

void solve(){
 ll n ; cin >> n;
 ll aa[n];
// map<ll,ll>mp;
 for(ll i=0;i<n;i++){
    cin >> aa[i];
   // mp[aa[i]]++;
 }
 ll ele = aa[0];
 ll cnt =1;
 ll ans = -1;
 for(ll i=1;i<n;i++){
   if(aa[i]>ele) {
      cnt++;
      ele = aa[i];
   }
   else{
      ans = max(ans,cnt);
      cnt = 1;
      ele = aa[i];
   }
 }
 ans = max(ans,cnt);
 cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  //  ll tt; cin>>tt;while(tt--)
         solve();
}