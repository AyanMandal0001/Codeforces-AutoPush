#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
  ll n,k,x;cin >>n>>k>>x;
  ll aa[n];ll cnt = 0;vector<ll>v;
  for(ll i=0;i<n;i++) cin>>aa[i]; 
  sort(aa,aa+n);
  for(ll i=1;i<n;i++){
    if(aa[i]-aa[i-1]>x) {
       ll op = (aa[i]-aa[i-1])/x ;
       if((aa[i]-aa[i-1])%x==0)  op--;
         v.push_back(op);
        }
  }
  if(v.size()==0||k==0){
    cout << v.size()+1 << endl ; return;
  }
  sort(v.begin(),v.end());
  for(ll i=1;i<v.size();i++){
    v[i]+= v[i-1];
  }
   int it = upper_bound(v.begin(),v.end(),k)-v.begin() - 1 ;
cout  << v.size()-it<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // ll tt; cin>>tt;while(tt--)
         solve();
}