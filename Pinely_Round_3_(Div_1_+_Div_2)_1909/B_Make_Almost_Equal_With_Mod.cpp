#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
bool check(ll k,ll aa[],ll n){
   set<ll>st;
   for(ll i=0ll;i<n;i++){
     st.insert(aa[i]%k);
   }
   if(st.size()==2) return true;
   else return false;
}
void solve(){
 ll n ; cin >> n;
 ll aa[n];
 for(ll i=0ll;i<n;i++){
    cin >> aa[i];
 }
  ll k = 1ll;
  while(k<=1e17){
    if(check(k,aa,n)){
      cout<<k<<endl;
      // cout<<"printing :";
      //   for(ll i=0ll;i<n;i++){
      //  cout << aa[i]%k<<" ";
      //   } cout << endl;
      break;
    }
    k *= 2;
  }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}