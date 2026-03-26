#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
bool check(int *arr,int n){
    int cnt1 = 0,cnt0=0;
      if(arr[0]==1) cnt1++;
     if(arr[0]==0) cnt0++;
    for(int i=1;i<n;i++){
        if(max(arr[i],arr[i-1])!=1) return false;
        if(arr[i]==1) cnt1++;
        if(arr[i]==0) cnt0++;
    }
    if(cnt1==n) return false;
    if(cnt0==n) return false;
    return true;
}
void solve(){
   int n ; cin >> n;
   int arr[n];
   for(int i=0;i<n;i++) cin >> arr[i];
   if(check(arr,n)) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}