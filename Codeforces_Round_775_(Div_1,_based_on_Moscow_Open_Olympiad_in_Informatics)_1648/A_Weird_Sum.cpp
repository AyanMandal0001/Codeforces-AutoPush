#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll mod = 1e9+7;
ll sumOfabsvalue(vector<ll>&arr){
   ll k = arr.size();
   sort(arr.begin(),arr.end());
   ll ans = 0;
   ll suf[k];
   suf[k-1]=arr[k-1];
   for(ll i=k-2;i>=0;i--){
       suf[i]=suf[i+1]+arr[i];
   }
    for(ll i=0;i<k-1;i++){
    ans += abs(arr[i]*(k-1-i) - suf[i+1]); 
      } 
  return ans;
}
void solve(){
 ll n,m ; cin >>n>>m;
 vector<vector<ll>>mat(n,vector<ll>(m));
  vector<vector<ll>>rpos(1e5+1);
  vector<vector<ll>>cpos(1e5+1);
  set<ll>st;
 for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin >>mat[i][j];
        rpos[mat[i][j]].pb(i);
        cpos[mat[i][j]].pb(j);
        st.insert(mat[i][j]);
    }
 }
 ll ans = 0;
 // summation of row& col of same color
 for(auto it=st.begin();it!=st.end();it++){
  ll val = *it;
   vector<ll>v1(rpos[val].begin(),rpos[val].end());
    vector<ll>v2(cpos[val].begin(),cpos[val].end());
  
    if(!v1.empty()) ans += sumOfabsvalue(v1);
    if(!v2.empty()) ans += sumOfabsvalue(v2);
 } 
  cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // ll tt; cin>>tt;while(tt--)
         solve();
}