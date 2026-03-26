#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
 int n , k ; cin >> n >> k;
 vector<int>arr(n);
 for(int i=0;i<n;i++){
    cin >> arr[i];
 }
 if(k>=3) {
       cout << 0 << endl; return;
 }
 sort(arr.begin(),arr.end());
 int mini = LLONG_MAX;
 for(int i=1;i<n;i++){
    mini = min(mini,arr[i]-arr[i-1]);
 }
  if(k==1) {
    cout << min(mini,arr[0]) << endl;
  }
  else{ // k == 2
    // after 1 operation mini a0 a1 .... an-1
    int m = min(arr[0],mini);
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          int val = arr[j]-arr[i];
          int it = lower_bound(arr.begin(),arr.end(),val) - arr.begin();
          if(it<n) m = min(m,arr[it]-val); // next greater
          if(it>0) m = min(m,val-arr[it-1]);// prev smaller
        }
     }
     cout << m << endl;
  }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}