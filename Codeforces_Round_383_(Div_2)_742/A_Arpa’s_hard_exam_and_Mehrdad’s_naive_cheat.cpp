#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
   int n ; cin >> n;
   int arr[]={6,8,4,2};
   if(n==0) cout<<1<<endl;
   else cout<<arr[n%4]<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 //   int tt; cin>>tt;while(tt--)
         solve();
}