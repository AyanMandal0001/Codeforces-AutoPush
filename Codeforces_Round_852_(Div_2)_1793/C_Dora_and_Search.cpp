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
  ll n ; cin >> n;
  vector<ll>v(n);
  map<ll,ll>mp;
  for(ll i=0;i<n;i++){
   ll x ;cin >> x;
   mp[x]++;
   v[i]=x;
  }
  ll i = 0,j=n-1;
  while(i<j){
     ll maxi=mp.rbegin()->first , mini = mp.begin()->first;
      if(v[i]==maxi||v[i]==mini||v[j]==maxi||v[j]==mini) {
           if(v[i]==maxi||v[i]==mini){ mp.erase(v[i]);i++;}
           else{ mp.erase(v[j]);j--;}
    }
    else break;
  }
  if(j-i+1>=4){
    cout <<i+1<<" "<<j+1<<endl;
  }
  else {
    cout <<-1<<endl;
  }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}