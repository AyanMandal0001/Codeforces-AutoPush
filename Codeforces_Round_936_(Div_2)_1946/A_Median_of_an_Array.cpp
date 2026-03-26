#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll mod = 1e9+7;
ll ceilf(ll a,ll b){return (a+b-1)/b;}
void solve(){
 ll n ; cin>>n;
 ll aa[n];
 for(ll i=0;i<n;i++){
    cin >> aa[i];
 }
 sort(aa,aa+n);
 ll op = 1;
 ll idx = ceilf(n,2);// 1 based
   aa[idx-1]++;
   ll val = aa[idx-1];
   for(ll i=idx;i<n;i++){
     if(aa[i]>=aa[i-1]) break;
     else { aa[i]++;  op++;}
   }
   cout << op <<"\n";
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}