#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
 ll n;cin >>n;
 ll t = n*(n-1)/2;
 vector<ll>v;
 map<ll,ll>mp;
 for(ll i=0;i<t;i++){
    ll x ; cin >> x;
    mp[x]++;
 }
 ll cnt = n-1;
   while(cnt){
     ll val = mp.begin()->first;
     ll f =  mp.begin()->first;
     mp[val] -= cnt;
     if(mp[val]==0) mp.erase(val);
     v.pb(val);
     cnt--;
   }
    v.pb(v.back());
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   cout << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}