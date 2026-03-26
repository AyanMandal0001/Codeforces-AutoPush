#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
 int n ; cin >> n; // 0-n
  if(n==1){
    cout<<2<<endl;
    return;
  }
  else if(n%3==0){
    cout<<n/3<<endl;
    return;
  }
  else{ // n % 3 != 0
     if((n-2) % 3 ==0){
        cout<<(n-2)/3+1<<endl;
        return;
      }
      else{  // (n-4 % 3 ==0)
        cout<<(n-4)/3+2<<endl;
        return;
      }
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}