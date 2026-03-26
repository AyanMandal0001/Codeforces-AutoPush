#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
int slcm(int n){
  int ans = 1;
   while(n){
  if(n%10)  ans = lcm(ans,n%10);
      n /= 10;
   }
   return ans;
}
void solve(){
   int n ; cin >> n;
   while(n % slcm(n)!=0){
     n++;
   }
   cout << n <<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}