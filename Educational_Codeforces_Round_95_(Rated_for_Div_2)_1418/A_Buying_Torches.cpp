#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
   int x , y , k ; cin >> x >> y >> k;
   int req = k + y * k;
   // initially  we have 1 stick but we need to buy min req amount of sticks
   int op = 0;
   int ini = 1;
   if( ini < req){
     op +=  (req + x -3)/(x-1);
      ini +=  ((req + x -3)/(x-1)) * (x -1);
   }
   op += k;
   cout << op << endl;
}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}