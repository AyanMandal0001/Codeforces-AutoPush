#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
  int n , k ; cin >> n >> k;
  int arr[n],p[n];
  for(int i=0;i<n;i++){
     cin >> arr[i];
  }
  sort(arr,arr+n);
  p[0]=arr[0];
  for(int i=1;i<n;i++){
     p[i]=p[i-1]+arr[i];
  }
  // lets say we do x operations of 1 st kind and k-x from 2nd kind
  // s will vary from [0..k]
  int maxi = -1;
  for(int x=0;x<=k;x++){
    // int pre = p[2*x-1];
    // int suf = p[n-1]-p[n-(k-x)-1];
    // int temp = p[n-1]-(pre+suf);
    int temp = p[n-(k-x)-1];
    if(2*x-1>=0) temp -= p[2*x-1];
    maxi = max(maxi,temp);
  }
  cout << maxi << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}