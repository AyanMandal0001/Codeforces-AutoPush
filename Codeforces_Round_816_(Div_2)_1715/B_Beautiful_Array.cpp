#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
ll n,k,b,s;
 cin>> n>>k>>b>>s;
  ll rem = s-k*b;
  if(s<k*b||s>(k*(b+n)-n)) {
    cout<<-1<<endl;return;
  }
  vector<ll>v(n,0);
  v[0]+=k*b;
  ll t=s-k*b;
  ll idx = 0;
  while(t>k-1){
    v[idx]+= k-1;
     t -= k-1;
     idx++;
  }
  v[n-1] += t;
  ll beauty = 0,sum=0;
  for(ll i=0;i<n;i++){
    // cout<<v[i]<<" ";
   beauty += v[i]/k;
    sum+= v[i];
  }
//  cout << endl;
  if(beauty==b && sum==s ){
    for(ll i=0;i<n;i++)cout<<v[i]<<" ";
    cout << endl;
  }
  else{
    cout<<"-1"<<endl;
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}