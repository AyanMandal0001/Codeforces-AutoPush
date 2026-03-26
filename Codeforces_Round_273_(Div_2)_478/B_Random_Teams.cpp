#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
 int n , m ; cin >> n >> m;
  int a = n - m;
 int maxi = (a+1)*a/2;
 int rem = n % m;
 int mini = 1e9;
 if(rem ==0){
   mini = m*(n/m)*(n/m - 1)/ 2;
 }
 else{
    mini = rem*(n/m+1)*(n/m)/2 + (m-rem)*(n/m)*(n/m - 1)/ 2;
 }
 if(m == 1){
  if(n==1) {  cout << 0 <<" "<< 0 << endl; } 
  else {cout << maxi <<" "<<maxi << endl; }
    return;
 }
 cout << mini <<" " << maxi <<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   // int tt; cin>>tt;while(tt--)
         solve();
}