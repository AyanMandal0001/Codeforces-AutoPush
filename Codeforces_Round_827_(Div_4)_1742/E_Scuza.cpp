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
 ll n,q; cin>>n>>q;
 ll aa[n],p[n],maxh[n];
 for(ll i=0;i<n;i++){
    cin >> aa[i];
    if(i==0) {
        p[i]=aa[i];
        maxh[i]=aa[i];
    }
    else{
        p[i]=p[i-1]+aa[i];
        maxh[i]=max(maxh[i-1],aa[i]);
    }
 }
  while(q--){
    ll x ; cin>>x;
    auto it=upper_bound(maxh,maxh+n,x)-maxh;
    if(it==0){
        cout<<0<<" ";
    }
    else{
      it--;
    cout<<p[it]<<" ";
    }   
  }
  cout << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}