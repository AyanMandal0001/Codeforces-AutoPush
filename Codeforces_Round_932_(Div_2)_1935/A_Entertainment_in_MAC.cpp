#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){ 
  int n ; string s0; cin >> n >> s0;
  string s1=s0;
  reverse(s1.begin(),s1.end());
  if( min(s0,s1)== s0){
    cout << s0 << endl;
  }
  else{
    cout<<s1<<s0<<endl;
  }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}