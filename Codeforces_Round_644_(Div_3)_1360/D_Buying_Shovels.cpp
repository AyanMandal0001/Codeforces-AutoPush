#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
  int n , k ; cin >> n >> k;
  int ans = -1;
   for(int i=sqrt(n);i>=1;i--){
     if(n%i==0 && i<=k){
       ans = max(ans,i);
     if(n/i<=k)  ans = max(ans,n/i);
     }
   }
  cout << n/ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}