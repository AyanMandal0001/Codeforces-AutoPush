#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
// *******************************************************************************//
void solve(){
  ll n ; cin >> n;
  vector<pair<ll,ll>>v;
  vector<pair<ll,ll>>vec;
  for(ll i=0;i<n;i++){
    ll x ; cin >> x;
    vec.pb({x,i+1});
  }
  sort(vec.begin(),vec.end());
  for(ll i=1;i<n;i++){
    ll rem = vec[i].first%vec[i-1].first;
    if(rem!=0) rem = vec[i-1].first - rem;
     vec[i].first += rem;
     v.pb({vec[i].second,rem});
  }

  // for( ll i=0;i<n;i++){
  //   cout << vec[i].first<<" ";
  // }
  // cout << endl;

  cout << v.size() << endl;
  for( ll i=0;i<v.size();i++){
    cout << v[i].first<<" "<<v[i].second<<endl;
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}