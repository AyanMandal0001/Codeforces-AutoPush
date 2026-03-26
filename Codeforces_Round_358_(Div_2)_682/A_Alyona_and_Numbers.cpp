#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;

 int arrn[5];
  int arrm[5];
// *******************************************************************************//
void solve(){
  int n , m ; cin >> n >> m;
      // brute

//   int cnt = 0;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         if((i+j)%5==0) cnt++;
//     }
//   }
//   cout << cnt << endl;
  
  for(int i=1;i<=n;i++){
    arrn[i%5]++;
  }
  for(int i=1;i<=m;i++){
    arrm[i%5]++;
  }
 //  reverse(arrm+1,arrm+5);
  int ans = arrn[0]*arrm[0];
  for(int i=1;i<5;i++){
    ans += arrn[i]*arrm[5-i];
  }
  cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  //  int tt; cin>>tt;while(tt--)
         solve();
}