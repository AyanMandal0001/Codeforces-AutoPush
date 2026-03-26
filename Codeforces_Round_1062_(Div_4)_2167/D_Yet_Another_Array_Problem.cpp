#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
    int n ; cin >> n;
    int arr[n];
   for(int i=0;i<n;i++) {
    cin >> arr[i];
  }
  int g = arr[0];
  for(int i=1;i<n;i++) {
    g = __gcd(g,arr[i]);
  }
  for(int i=2;i<=100005;i++){
    if(__gcd(i,g)==1) {
        cout << i << endl;
        return;
    }
 }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}