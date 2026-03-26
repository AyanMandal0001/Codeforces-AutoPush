#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
void solve(){
  ll n ; cin >> n;
  ll aa[n],p[n];
  ll sum = 0;
  for(ll i=0;i<n;i++){
    cin >> aa[i];
     sum += aa[i];
  }
  p[0]=aa[0];
  for(ll i=1;i<n;i++){
    p[i]=p[i-1]+aa[i];
  }
  ll ans = 1;
  for(ll i=0;i<n-1;i++){
    ans = max(ans,gcd(p[i],sum-p[i]));
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}