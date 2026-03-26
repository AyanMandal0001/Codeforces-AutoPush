#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
  int n , k,  q ; cin >> n >> k >> q;
  int arr[n]; vector<int> v;
  int cnt = 0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    if(arr[i]<=q){
       cnt++;
    }
    else{
        if(cnt>=k) {v.push_back(cnt);cnt = 0;}
        else cnt = 0;
    }
  }
  if(cnt>=k) v.push_back(cnt);
  int ans = 0;;
  for(int i=0;i<v.size();i++){
  //  subarray of min length k
      ans += (v[i]-k+1)*(v[i]-k+2)/2;
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}