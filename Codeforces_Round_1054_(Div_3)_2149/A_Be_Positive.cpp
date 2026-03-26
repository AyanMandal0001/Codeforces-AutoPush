#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
 int n ; cin >> n;
 int arr[n];
 int s = 0;
 int cnt = 0;
 for(int i=0;i<n;i++){
    cin >> arr[i];
    if(arr[i]==-1){ cnt++;}
    if(arr[i]==0)  s+= 1;
 }
   if(cnt%2==1) s += 2;
   cout << s << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}