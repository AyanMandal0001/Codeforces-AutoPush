#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
 int n ; cin >> n;
 vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=1;i<n;i++){
      if(abs(arr[i]) > abs(arr[0])) {
        cnt++;
      }
    }
    if(n%2==1){
        if(cnt>=((n+1)/2)-1 ){
            cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }
  else{
    if(cnt >= (n/2)-1 ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}