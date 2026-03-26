#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
   int x,y,z;
  
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> z;
            if(z == 1){
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x-2) + abs(y-2) << endl;
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

  //  int tt; cin>>tt;while(tt--)
         solve();
}