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
 ll n,k; cin >>n>>k;
 ll aa[n];
 vector<ll>v;
 ll cnt = 1,ans=0;
 for(ll i=0;i<n;i++) cin >>aa[i];
 for(ll i=1;i<n;i++){
    if(aa[i]<= aa[i-1]/2){v.pb(cnt);cnt=1;}
    else cnt++; 
 }
 v.pb(cnt);
 
 for(ll i=0;i<v.size();i++){
    if(v[i]>=k+1) ans += v[i]-k;
 }

 cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}