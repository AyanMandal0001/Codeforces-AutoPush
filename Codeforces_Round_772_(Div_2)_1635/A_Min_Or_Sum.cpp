#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
  int n ; cin >> n;
  int arr[n]; 
  int ans ;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    if(i==0) ans = arr[i];
    else ans = ans | arr[i];
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt=1; 
    cin>>tt;
    while(tt--) solve(); 
}