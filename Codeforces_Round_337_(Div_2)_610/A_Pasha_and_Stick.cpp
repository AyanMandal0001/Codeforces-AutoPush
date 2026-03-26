#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
 int n ; cin >> n ;
 if(n%2) {cout << 0 <<endl; return;}
 // logic
 //    2x1+2x2 = n;
 //   => x1+x2=n/2;
 //   => 1+y1+1+y2=n/2;
 //   => y1+y2 =n/2 - 2; // n/2 - 2 == t (say)
  //  soln   t+2-1 C 2-1  =  t+1 C 1 = ans (say)
  // if(t%2 ==0)  means squares possible => ans -= 1;
  // else ans = ans;
   int t = n/2 - 2;
   int ans = t+1;
   if(t<=0) cout << 0 <<endl;
   else if(t%2==0) cout << (ans - 1)/2 <<endl;
   else cout << ans/2 << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  //int tt; cin>>tt;while(tt--)
         solve();
}