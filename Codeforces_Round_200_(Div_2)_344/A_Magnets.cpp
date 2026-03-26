#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
 int n ;cin >> n;
 int arr[n]; int cnt = 0;
 for(int i=0;i<n;i++){
   cin >> arr[i];
   if(i>0 && arr[i]!=arr[i-1]) cnt++;
 }
  cout<<cnt+1<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // int tt; cin>>tt;while(tt--)
         solve();
}