#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
 int n ; cin >> n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin >> arr[i];
 }
 sort(arr, arr+n,greater<int>());
 for(auto &it:arr){
    cout << it << " ";
 }
 cout <<endl;
}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}