#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
ll mod = 1e9+7;
set<ll>getDivisors(ll n){
    set<ll>ans;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){ ans.insert(i);ans.insert(n/i);}
    }
    return ans;
}
void solve(){
 ll n ; cin >> n;
 ll ar[n],p[n];
 ll maxi = LLONG_MIN;
 ll mini = LLONG_MAX; 
 for(ll i=0;i<n;i++){
    cin >> ar[i];
    maxi = max(maxi,ar[i]);
    mini = min(mini,ar[i]);
    if(i==0) p[i]=ar[i];
    else p[i]=p[i-1]+ar[i];
 }
 ll ans = maxi-mini;
 if(n==1) {cout << ans << endl;return;}
 set<ll>temp=getDivisors(n);
  for(auto it=temp.begin();it!=temp.end();it++){
     int k = *it;
     ll loc_maxi = LLONG_MIN;
     ll loc_mini = LLONG_MAX; 
     for(ll i=k-1;i<n;i+=k){
       ll val = p[i];
       if(i-k>0) val -= p[i-k];
        loc_maxi = max(loc_maxi,val);
        loc_mini = min(loc_mini,val);
     }
     ans = max(ans,loc_maxi-loc_mini);
  }
  cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}