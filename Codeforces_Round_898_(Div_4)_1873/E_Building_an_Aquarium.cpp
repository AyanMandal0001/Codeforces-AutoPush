#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;
int check(int m,int arr[],int n , int x){
    long long w_trapped = 0;
  for(int i=0;i<n;i++){
     if(arr[i]<m){
        w_trapped += m - arr[i];
        if(w_trapped>x) return 0;
     }
  }
  if(w_trapped<=1LL*x) return 1;
}
void solve(){
 int n , x; cin >> n >> x;
 int arr[n];
 for(int i=0;i<n;i++){
    cin >> arr[i];
 }
 int l = 0 , h = 2e18;
 int ans = -1;
 while(l<=h){
    int m = l+(h-l)/2;
    if(check(m,arr,n,x)){
    ans = max(ans,m);
     l = m + 1;
    }
    else{
        h = m  - 1;
    }
 }
 cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}