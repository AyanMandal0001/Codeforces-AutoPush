#include <bits/stdc++.h>
using namespace std;

// *******************************************************************************//
void solve(){
  int n , t; cin >> n >> t;
  if( t == 10){
    if(n==1){ cout << -1 << endl;return;}
    else{
        for(int i=0;i<n-2;i++){
            cout << 1;
        }
        cout<<10<<endl;
    }
  }
  else {
    for(int i=0;i<n;i++){
        cout << t;
    }
    cout << endl;
  }
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