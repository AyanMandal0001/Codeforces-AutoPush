#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
  string s ; cin >> s;
  ll n = s.size();ll maxi=LLONG_MIN;
  ll cnt = 0;
  s += s;
  priority_queue<ll>pq;
  for(ll i=0;i<2*n;i++){
     if(s[i]=='1'){ cnt++;}
     else {  pq.push(cnt);cnt = 0; }
  }
  if(cnt!=0) pq.push(cnt);
  ll val=pq.top();
 // cout<<"pr:"<<val<<endl;
  if(val==0){
    cout<<0<<endl;return;
  }
  if(val>n){
    cout<<n*n<<endl; return;
  }
  ll ans = 0;
  ans = max(ans,((val+1)/2) *( (val+2)/2));
  cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}