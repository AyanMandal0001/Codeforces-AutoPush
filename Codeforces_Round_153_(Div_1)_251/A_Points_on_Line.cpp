#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int n , d ; 
int arr[100100];
// *******************************************************************************//
void solve(){
  cin >> n  >> d;
  for(int i=0;i<n;i++) cin >> arr[i];

   int ans = 0;
  for(int i=0;i<n;i++){
    int ind = upper_bound(arr,arr+n,arr[i]+d)-arr;
    int cnt = ind - 1 - i;
    ans += cnt*(cnt-1)/2;
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   // int tt; cin>>tt;while(tt--)
         solve();
}