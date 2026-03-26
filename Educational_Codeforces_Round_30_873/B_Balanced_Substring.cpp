#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
  ll  n ; string s ; cin >> n >> s;
  int arr[n],p[n];
  for(int i=0;i<n;i++){
   if(s[i]-'0') arr[i]=1;
   else arr[i]=-1;
  }
  p[0]=arr[0];
  for(int i=1;i<n;i++){
   p[i]=p[i-1]+arr[i];
  }
  set<ll>st;              st.insert(0);
  map<ll,vector<ll>>mp;   mp[0].push_back(-1);
  ll maxi=LLONG_MIN;
  
  for(int i=0;i<n;i++){
    if(st.count(p[i])){
      ll j = mp[p[i]][0];
      ll len = i - j ;
      maxi = max(maxi,len);
    }
     st.insert(p[i]);
     mp[p[i]].push_back(i);
  }
  if(maxi==LLONG_MIN) cout << 0 << endl;
  else cout << maxi << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // ll tt; cin>>tt;while(tt--)
         solve();
}