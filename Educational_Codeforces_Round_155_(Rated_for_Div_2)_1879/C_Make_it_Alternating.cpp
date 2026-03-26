#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
ll m = 998244353;
ll fact(ll n,ll m){
    if(n==0||n==1) return 1;
    return n*fact(n-1,m)%m;
}
void solve(){
  string s ; cin >> s; ll n = s.length();
  ll cnt = 1; ll ans = 1,minop=0;
  vector<ll>v;
  for(ll i=1;i<n;i++){
    if(s[i]==s[i-1]) cnt++;
    else {v.push_back(cnt); cnt = 1;}
  }
  if(cnt) v.push_back(cnt);
  for(ll i=0;i<v.size();i++){
    minop += v[i]-1;
    ans = (ans * v[i]) % m ;
  }
   ans = (ans * fact(minop,m))%m ;
  cout<< minop<<" " << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}