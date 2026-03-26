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
 ll n ;cin >> n;
 ll aa[n+1];
 ll hi=n,lo=1;
 for(ll i=n;i>=1;i-=2){
    aa[i]=hi;
    hi--;
 }
 for(ll i=n-1;i>=1;i-=2){
    aa[i]=lo;
    lo++;
 }
 for(ll i=1;i<=n;i++){
    cout << aa[i]<<" ";
 }  
 cout << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}