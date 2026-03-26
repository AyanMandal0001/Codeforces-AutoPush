#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
  int n ; cin >> n;
  string s; cin >> s;
  if(n>=11){
    int ind = -1;bool flag = false;
    for(int i = 0; i < n; i++){
      if(s[i] == '8'){
        ind =i;
        flag = true;
        break;
      }
    }
    if(n-ind >= 11 && flag){
      cout<< "YES" << endl;
      return;
    }
    else{
      cout<< "NO" << endl;
      return;
    }
  }
  else{
    cout<< "NO" << endl;
    return;
  }
}
signed main(){
   int tt; cin>>tt;while(tt--)
         solve();
}