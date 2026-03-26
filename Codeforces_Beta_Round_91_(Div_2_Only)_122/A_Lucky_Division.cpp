#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
int luckey[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
void solve(){
  int n ;cin >> n;
  for(int i=0;i<14;i++){
    if(n % luckey[i] == 0){
      cout << "YES" ;
      return;
    }
  }
  cout << "NO";
} 
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    // cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}