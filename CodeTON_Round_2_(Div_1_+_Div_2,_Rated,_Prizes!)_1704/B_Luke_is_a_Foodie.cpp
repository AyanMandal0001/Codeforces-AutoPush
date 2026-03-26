#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define f first
#define s second

void solve(){
 ll n,x; cin >> n >> x;
 vector<pair<int,int>>v;
  for(ll i=0;i<n;i++){
    ll val; cin >> val;
    v.push_back(make_pair(abs(val-x),val+x));
  }
  ll l = v[0].f;
  ll r = v[0].s;
  ll cnt = 0;
  for(ll i=1;i<n;i++){
    ll cur_l=v[i].f;
    ll cur_r=v[i].s;
    if(r<cur_l||l>cur_r){ 
        cnt++;
        l = cur_l;
        r = cur_r;
    }
    else{
        l = max(l,cur_l);
        r = min(r,cur_r);
    }
  }
  cout << cnt << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}