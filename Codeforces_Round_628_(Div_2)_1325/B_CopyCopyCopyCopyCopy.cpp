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
 map<ll,ll>mp;
 for(ll i=0;i<n;i++){
    cin >> aa[i];
    mp[aa[i]]++;
 }
 cout <<mp.size()<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}