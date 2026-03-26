#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
 int n , d; cin >> n >> d;
 int arr[n];
 for(int i=0;i<n;i++){
    cin >> arr[i];
 }
  sort(arr,arr+n);
  if(arr[0] > d) {
    cout << n <<endl;
    return;
  }
  if(arr[n-1]*n < d){
    cout << 0 <<endl;
    return;
  }
  int rem = n;
  int cnt = 0;
  for(int i=n-1;i>=0;i--){
      int cur = (d+arr[i]-1)/(arr[i]);
      if(d%arr[i]==0) cur++;
    if( cur  <= rem){
         rem -= cur;
         cnt++;
    }
  }
  cout << cnt <<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // int tt; cin>>tt;while(tt--)
         solve();
}