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
 ll n;cin>>n;
 ll aa[n];
 for(ll i=0;i<n;i++) cin >>aa[i];
//  if(n==1){
//     cout << aa[0]<<endl;return;
//  }
 vector<vector<ll>>v;
 ll cnt = 0;
 ll prev = 0;
 for(ll i=1;i<n;i++){
    if(abs(aa[i])%2==abs(aa[i-1])%2){
        v.pb({prev,i-1});
        prev = i;
    }
 }
 v.pb({prev,n-1});
 ll maxi = -1e9;
 for(ll i=0;i<v.size();i++){
    ll s = 0;
    for(int j=v[i][0];j<=v[i][1];j++){//kadane's algo
         s = s + aa[j];
         maxi = max(maxi,s);
         if(s<0) s = 0;
    }
 }

cout << maxi << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   ll tt; cin>>tt;while(tt--)
         solve();
}