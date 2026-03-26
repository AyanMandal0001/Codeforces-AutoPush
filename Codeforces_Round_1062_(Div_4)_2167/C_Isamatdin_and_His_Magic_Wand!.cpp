#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
bool isEv(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]%2!=0) return false;
  }
  return true;
}
bool isOd(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]%2==0) return false;
  }
  return true;
}
void solve(){
  int n ; cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) {
    cin >> arr[i];
  }
  if(isEv(arr,n) ||isOd(arr,n)){
     for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
     }
  }
  else{
     sort(arr,arr+n);
       for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
     }
  }
  cout << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}