#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
  int a , b, c; cin >> a >> b >> c;
   int ans = 0;
  while( (a>=1 and b >=2)or(b>=1 and c >=2)){
    if(b>=1 and c >=2){
      b -= 1;
      c -= 2;
      ans += 3;
    }
    else  { //(a>=1 and b >=2)
      a -= 1;
      b -= 2;
      ans += 3;
    }
   }
  cout<<ans<<endl;
}
signed main(){
  int tt; cin>>tt;while(tt--)
         solve();
}