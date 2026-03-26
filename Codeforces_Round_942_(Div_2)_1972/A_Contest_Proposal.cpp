#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
bool check(int arr1[],int arr2[],int k,int n){
    for(int i=n-1;i>=k;i--){
   if( arr1[i-k] > arr2[i]) return false;
    }
    return true;
}
void solve(){
    int n ; cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }   
    for(int i=0;i<n;i++){
        cin >> arr2[i];
    }
    int ans = 0;
  for(int k=0;k<=n;k++){
     if(check(arr1,arr2,k,n)) {ans = k;break;}
  }
  cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}