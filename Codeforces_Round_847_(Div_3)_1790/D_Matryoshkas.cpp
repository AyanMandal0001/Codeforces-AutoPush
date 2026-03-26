#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
void solve(){
 ll n ;cin >>n;
 map<ll,ll>mp; ll cnt = 0;
 for(ll i=0;i<n;i++){
    ll x ; cin >> x;
    mp[x]++;
 }
 while(!mp.empty()){
    auto it1=mp.begin();
    ll ele = it1->first;
    mp[ele]--;
    if(mp[ele]==0) mp.erase(ele);
    while(mp.find(ele+1)!=mp.end()) {
        mp[ele+1]--; 
        if(mp[ele+1]==0) mp.erase(ele+1);
         ele++;
    }
    cnt++;
 }
 cout << cnt << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}