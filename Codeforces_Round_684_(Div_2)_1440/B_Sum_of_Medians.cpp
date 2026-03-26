#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll n,k;
ll f(ll a,ll b) {return ((a+b-1)/b);}
ll aa[1000100];
void solve(){
 cin>>n>>k;
 for(ll i=0;i<n*k;i++){
    cin>>aa[i];
 }
 sort(aa,aa+n*k);
 ll cnt = 1;
 ll idx = f(n,2);
 ll rem = n - idx;
 ll fst = n*k-1- rem;
 ll ans = aa[fst];
 //cout << ans<<" "<<idx<<" "<<rem<<endl;
 while(cnt<k){
    ans += aa[fst-rem-1];
  //  cout << aa[fst-rem-1]<<endl;
    fst -= (rem+1);
    cnt++;
 }
 cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}