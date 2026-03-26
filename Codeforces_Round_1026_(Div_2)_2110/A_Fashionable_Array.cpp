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
  sort(arr, arr + n);
  if(arr[0]%2 == arr[n-1]%2){
    cout << 0 << endl;
    return;
  }
  int op1 = 0;
   for(int i=0;i<n-1;i++){
    if(arr[i]%2 == arr[n-1]%2){
     break;
    }
    op1++;
}
  int op2 = 0;
   for(int i=n-1;i>=1;i--){
    if(arr[i]%2 == arr[0]%2){
     break;
    }
    op2++;
}
cout << min(op1, op2) << endl;
}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}