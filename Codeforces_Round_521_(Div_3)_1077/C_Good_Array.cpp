#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
 ll n ; cin >> n;
 ll aa[n];
  map<ll,ll>mp;
  vector<ll>v;
  ll s = 0;
 for(int i=0;i<n;i++){
    cin >> aa[i];  mp[aa[i]]++; s += aa[i];
 }
 for(int i=0;i<n;i++){
    mp[aa[i]]--;
    if(mp[aa[i]]==0)mp.erase(aa[i]);
    ll remS = s - aa[i];
    if(remS%2==0){
       ll ele = remS/2;
    if(mp.find(ele)!=mp.end()) v.push_back(i+1);
    } 
    mp[aa[i]]++;
 }
 cout << v.size() << endl;
 for(ll i=0;i<v.size();i++){
    cout << v[i]<<" ";
 }
 cout << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // ll tt; cin>>tt;while(tt--)
         solve();
}