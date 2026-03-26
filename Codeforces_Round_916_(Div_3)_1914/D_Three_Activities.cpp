#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define f first
#define s second
void solve(){
  ll n ; cin >> n;
  vector<pair<ll,ll>>aa;
  vector<pair<ll,ll>>bb;
  vector<pair<ll,ll>>cc;
  for(ll i=0;i<n;i++){
   ll t ; cin >> t;aa.push_back({t,i});
  }
  for(ll i=0;i<n;i++){
   ll t ; cin >> t;bb.push_back({t,i});
  }
  for(ll i=0;i<n;i++){
   ll t ; cin >> t;cc.push_back({t,i});
  }
  sort(aa.begin(),aa.end(),greater<pair<ll,ll>>());
  sort(bb.begin(),bb.end(),greater<pair<ll,ll>>());
  sort(cc.begin(),cc.end(),greater<pair<ll,ll>>());
  ll ans = 0LL;
  for(ll i=0;i<3;i++){
    ll ski=aa[i].f;  ll ind1=aa[i].s;
    for(ll j=0;j<3;j++){
        ll movie=bb[j].f; ll ind2=bb[j].s;
        if(ind1!=ind2){
            for(ll k=0;k<3;k++){
                ll games=cc[k].f; ll ind3=cc[k].s;
                if(ind1!=ind3&&ind2!=ind3){
                  ans = max(ans,ski+movie+games);
                }
            }
        }
    }
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}