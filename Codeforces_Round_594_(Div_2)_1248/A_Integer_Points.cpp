#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
  int n ; cin >>n;
  vector<int> arr1(n);
  int cnt_even1 = 0,cnt_even2=0;
  for(int i = 0; i < n; i++){
      cin >> arr1[i];
      if(arr1[i] % 2 == 0){
          cnt_even1++;
      }
  }
  int m ; cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
        if(arr2[i] % 2 == 0){
            cnt_even2++;
        }
    }
    int ans = cnt_even1 * cnt_even2+ (n - cnt_even1) * (m - cnt_even2);
 cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}