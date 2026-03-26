#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


// *******************************************************************************//
void solve(){
  int  n ; cin  >> n;
  vector<int> arr(n);
  int cnt = 0;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
    if(arr[i] == 1){
      cnt++;
    }
  }
  int op = 0;
  if(cnt % 2 == 0){
     op += cnt / 2;
     op += n-cnt;
     cout << op << endl;
  }
  else{
        op += (cnt / 2) + 1;
        op += n - cnt;
        cout << op << endl;
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}