#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define lli long long

// *******************************************************************************//
void solve(){
 lli n , c ; cin >> n >> c;
 lli arr[n];
 lli s = 0 , sumsq = 0;
 for(lli i=0;i<n;i++){
    cin >> arr[i];
     s += arr[i];
     sumsq += arr[i]*arr[i];
 }
//  lli rem = c - sumsq;
//  rem /= 4LL;
//   lli d = round(sqrt(s*s+4LL*n*rem));
//   d -= s;
//   lli ans = d / (2LL*n);
//   cout << ans <<endl;
  lli l = 1 , h =sqrt(c-sumsq);
  int ans = -1;
  while(l<=h){
     lli m = (l+h)/2;
     lli tot = 0;
     for(int i=0;i<n;i++){
        lli sde = arr[i]+2LL*m;
        tot += sde*sde;
        if(tot>c) break;
     }
     if(tot==c){
       ans = m;
        break;
     }
     else if(tot < c){
       l = m+1;
     }
     else{
      h = m-1;
     }
  }
  cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    lli tt; cin>>tt;while(tt--)
         solve();
}