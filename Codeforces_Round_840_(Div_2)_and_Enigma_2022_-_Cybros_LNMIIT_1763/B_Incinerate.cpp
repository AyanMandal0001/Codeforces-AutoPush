#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
#define f first
#define s second
using state = pair<ll,ll> ;
void solve(){
 ll n,k; cin >>n>>k;
 vector<state>v(n);
 ll suf[n];
 for(ll i=0;i<n;i++){ // health
    cin >>v[i].f;
 }
 for(ll i=0;i<n;i++){ // pow
    cin >>v[i].s;
 }
 sort(v.begin(),v.end());
 
 suf[n-1]=v[n-1].s; 
 for(ll i=n-2;i>=0;i--){ // to quick access of min from [i...n-1]
     suf[i]=min(suf[i+1],v[i].s);
 }
  ll op = 1;
  ll copy = k,sum=k;
  auto it = upper_bound(v.begin(),v.end(),make_pair(sum,1000000000LL))-v.begin();
  while(it<n){ 
      op++;
      ll mini = suf[it];
      k = k-mini;
      if(k<=0) break;
      sum += k;
      it = upper_bound(v.begin(),v.end(),make_pair(sum,1000000000LL)) -v.begin();       
    
  }
  if(it==n) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}