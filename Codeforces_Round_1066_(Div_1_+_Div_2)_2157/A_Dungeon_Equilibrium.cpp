#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void solve(){
  int n ; cin >> n;
  map<int,int>mp;
  for(int i=0;i<n;i++){
    int x ; cin >> x;
    mp[x]++;
  }
  int cnt = 0;
   for(auto it=mp.begin();it!=mp.end();it++){
      int a = it->first;
      int b = it->second;
      if(b<a) cnt += b;
      else cnt += b-a;
   }
   cout << cnt << endl;
}
signed main(){
    int tt; cin >> tt; while(tt--)
    solve();
}