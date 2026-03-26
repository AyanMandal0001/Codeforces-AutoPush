#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll mod = 1e9+7;
bool allsame(ll aa[],ll n){
    ll ele = aa[0];
    for(ll i=1;i<n;i++) {
        if(aa[i]!=ele) return false;
    }
    return true;
}
// ques  min size of b
void solve(){
 ll n; cin >> n;
 ll aa[n]; ll prev = -1,cnt = 0;
 vector<ll>v;
 for(ll i=0;i<n;i++) {
    cin >> aa[i];
    if(i==0) v.pb(aa[i]);
    else {
        if(v.back()!=aa[i]) v.pb(aa[i]);
    }
 }
 if(allsame(aa,n)) {
    cout << 1 << endl ; return;
 }
  for(ll i=1;i<v.size()-1;i++){
     if((v[i]>v[i+1] && v[i]>v[i-1]) ||  (v[i]<v[i+1] && v[i]<v[i-1])) cnt++;
  }
  cout << cnt + 2 << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}