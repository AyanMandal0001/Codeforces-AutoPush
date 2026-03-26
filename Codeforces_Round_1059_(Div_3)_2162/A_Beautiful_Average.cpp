#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;

// *******************************************************************************//
void solve(){
  int n ; cin >> n;
  int arr[n+1],p[n+1];
  arr[0]=0;
  for(int i=1;i<=n;i++){
    cin >> arr[i];
  }
  p[0]=arr[0];
  for(int i=1;i<=n;i++){
    p[i]=p[i-1]+arr[i];
  }
 int ans = *max_element(arr,arr+(n+1));
  for(int i=1;i<=n;i++){
    for (int j = i; j <=n; j++)
    {
        int avg = (p[j]-p[i])/(j-i+1);
       // cout << avg << endl;
        ans = max(avg,ans);
    }  
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}