#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;

// *******************************************************************************//
void solve(){
  int n ; cin >> n;
  int arr[n];
  int mini = 1e9;
  int cnt = 0 , sum = 0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    mini = min(mini,abs(arr[i]));
    if(arr[i]<0) cnt++;
    sum += abs(arr[i]);
  }
  if(cnt%2==0) cout << sum << endl;
  else{ // cnt is odd
    sum -= 2*mini;
    cout << sum << endl;
  }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}