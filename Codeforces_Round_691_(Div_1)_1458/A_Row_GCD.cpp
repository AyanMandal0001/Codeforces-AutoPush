#include <bits/stdc++.h>
using namespace std;
using lli = long long;
lli gcd(lli a,lli b){
    if(b==0) return a;
    return gcd(b,a%b);
}
// *******************************************************************************//
void solve(){
   lli n , m ; cin >> n >> m;
   lli aa[n],bb[m];
   for(lli i = 0; i < n; i++) cin >> aa[i];
   for(lli i = 0; i < m; i++) cin >> bb[i];

   sort(aa,aa+n);
   lli ans = 0LL;
   for(lli i=1;i<n-1;i++){
      ans = gcd(aa[i]-aa[0],ans);
   }

   for(lli i=0;i<m;i++){
    cout<<gcd( bb[i]+aa[0],ans)<<" ";
   }
} 
signed main(){
   // lli tt; cin>>tt;while(tt--)
         solve();
}