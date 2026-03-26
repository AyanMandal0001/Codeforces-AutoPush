#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll mod = 1e9+7;
ll same(ll aa[],ll n){
   ll val=aa[0];
   for(ll i=1;i<n;i++){
      if(aa[i]!=val) return 0;
   }
   return 1;
}
void solve(){
 ll n ; cin >> n;
 ll aa[n];
 map<ll,vector<ll>>mp;
 vector<vector<ll>>v;
 for(ll i=0;i<n;i++){
    cin >> aa[i]; mp[aa[i]].pb(i+1);
 } 
 if(same(aa,n)){
   cout << "NO"<<endl; return;
 }
 auto it1 = mp.begin();
 ll val1 = it1->first;
 ll idx1 = mp[val1][0];
   auto it2 = it1; it2++;
  ll val2 = it2->first;
  ll idx2 = mp[val2][0];
   for(;it2!=mp.end();it2++){
    for(auto t:mp[it2->first]){
      v.pb({idx1,t});
    }
 }
  for(ll i=1;i<mp[val1].size();i++){
     v.pb({idx2,mp[val1][i]});
  }
  cout << "YES"<<endl;
  for(ll i=0;i<v.size();i++){
   cout<<v[i][0]<<" "<<v[i][1]<<endl;
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}