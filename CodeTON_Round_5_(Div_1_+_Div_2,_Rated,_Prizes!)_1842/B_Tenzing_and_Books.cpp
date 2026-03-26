#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
ll take(ll arr[],ll idx,  set<ll>&st){
  ll ele = arr[idx];
  for(ll i=0;i<32;i++){
    if(ele&(1<<i)) {
       if(!st.count(i)) return 0;
    }
  }
  return 1;
}
void solve(){
 ll n,x; cin >>n>>x;
 ll ar[n],br[n],cr[n];
 for(ll i=0;i<n;i++){
    cin >> ar[i];
 }
 for(ll i=0;i<n;i++){
    cin >> br[i];
 }
 for(ll i=0;i<n;i++){
    cin >> cr[i];
 }
  set<ll>st;
  for(ll i=0;i<32;i++){
   if(x&(1<<i)) st.insert(i);
  }
  ll i=0,j=0,k=0;
  ll val = 0;
  while(i<n && take(ar,i,st)) {
    val = val | ar[i];
    i++;
  } 
  while(j<n && take(br,j,st)) {
    val = val | br[j];
    j++;
  } 
  while(k<n && take(cr,k,st)) {
    val = val | cr[k];
    k++;
  } 

  if(val == x) cout <<"Yes" <<endl;
  else cout <<"No"<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}