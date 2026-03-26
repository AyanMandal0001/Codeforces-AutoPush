#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
  ll n,q; cin>>n>>q;
  ll arr[n],final[n];
  vector<ll>range(n+1,0);//eff 0 to n-1
  for(ll i=0;i<n;i++){
    cin >> arr[i];
  }
  sort(arr,arr+n,greater<ll>());
  vector<pair<ll,ll>>querie;
  for(ll i=0;i<q;i++){
    ll l,r;cin >>l>>r; l--;r--;
    querie.push_back({l,r});
    range[l]++;
    range[r+1]--;
  }
  for(ll i=1;i<=n;i++)range[i]+=range[i-1];
  
  vector<pair<ll,ll>>v;
  for(ll i=0;i<n;i++){
     v.push_back({range[i],i});
  }
  sort(v.begin(),v.end(),greater<pair<ll,ll>>());
  for(ll i=0;i<n;i++){
    final[v[i].second]=arr[i];
  }
  for(int i=1;i<n;i++) final[i]+=final[i-1];
  ll s = 0;
  for(ll i=0;i<q;i++){
    ll l = querie[i].first , r = querie[i].second;
    s += final[r];
    if(l-1>=0) s -= final[l-1];
  }
  cout << s << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //ll tt; cin>>tt;while(tt--)
         solve();
}