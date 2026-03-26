#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
  int n ;  
  string s ; 
  cin >> n >> s;
  int cnt = 0;
  for(int i=0;i<n;i++){
   if(s[i]=='R') cnt++;
  }
  int r = cnt;
  int l = -1*(n-cnt);
  cout<<(r-l+1)<<endl;
}
signed main(){
   // int tt; cin>>tt;while(tt--)
         solve();
}