#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define ll long long

// *******************************************************************************//
void solve(){
  int n ; cin >> n;
vector<int>arr(n);

for(int i=0;i<n;i++){
  cin >> arr[i];
  
}
for (int i = 1; i < n - 1; ++i) {
  if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1]) {
    cout << "YES" << endl;
    cout << i <<" "<< i + 1 <<" "<< i + 2 << endl;
    return;
  }
}
cout << "NO" << endl;

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