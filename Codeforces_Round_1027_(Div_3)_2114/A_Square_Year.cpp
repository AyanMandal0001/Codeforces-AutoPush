#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
  int n ; cin >> n;
   int x = sqrt(n);
   if(x*x==n){
  cout <<0<<" "<<x<<endl;
     return;
   }
   cout <<-1<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}