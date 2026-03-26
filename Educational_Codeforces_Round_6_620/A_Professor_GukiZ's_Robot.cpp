#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
 int x0,y0; cin >> x0 >> y0;
 int x1,y1; cin >> x1 >> y1;
 int x = x1 - x0;
 int y = y1 - y0;
 cout<<abs(abs(x)-abs(y))+min(abs(x),abs(y))<<endl;
}
signed main(){
  //  int tt; cin>>tt;while(tt--)
         solve();
}