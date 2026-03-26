#include <bits/stdc++.h>
using namespace std;
#define int long long
// *******************************************************************************//
void solve(){
    int sw = 0,sb = 0;
    for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++){
        char c; cin >> c;
        if(c=='q') sb += 9;
        else if(c=='Q') sw += 9;
        else if(c=='r') sb += 5;
        else if(c=='R') sw += 5;
        else if(c=='b') sb += 3;
        else if(c=='B') sw += 3;
        else if(c=='n') sb += 3;
        else if(c=='N') sw += 3;
        else if(c=='p') sb += 1;
        else if(c=='P') sw += 1;
      }
    }
    if(sw > sb) cout<<"White\n";
    else if(sw < sb) cout<<"Black\n";
    else cout<<"Draw\n";
}
signed main(){
  //  int tt; cin>>tt;while(tt--)
         solve();
}