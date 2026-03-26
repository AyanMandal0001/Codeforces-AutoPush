#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
   int w , h ; cin >> w >> h;
   int k1 ; cin >> k1;
   int w1[k1]; for(int i=0;i<k1;i++){  cin >> w1[i]; }
   int k2 ; cin >> k2;
   int w2[k2]; for(int i=0;i<k2;i++){   cin >> w2[i];}
   int k3 ; cin >> k3;
   int h1[k3]; for(int i=0;i<k3;i++){  cin >> h1[i]; }
   int k4 ; cin >> k4;
   int h2[k4]; for(int i=0;i<k4;i++){   cin >> h2[i];}

   int w_max = max( w1[k1-1]-w1[0],w2[k2-1]-w2[0]);
    int h_max = max( h1[k3-1]-h1[0],h2[k4-1]-h2[0]);
    cout <<max(w_max*h,h_max*w)<<endl;
}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}