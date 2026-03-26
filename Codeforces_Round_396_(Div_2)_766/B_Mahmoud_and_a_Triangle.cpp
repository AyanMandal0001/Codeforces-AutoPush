#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
  int n ; cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  sort(arr,arr+n);
  for(int i=1;i<n-1;i++){
   if( arr[i]+arr[i-1] > arr[i+1]) {
    cout <<"YES\n";
    return ;
   }
  }
  cout <<"NO\n";
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   // int tt; cin>>tt;while(tt--)
         solve();
}