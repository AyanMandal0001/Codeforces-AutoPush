#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
bool isPrime(int n){
  if(n <= 1) return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}
void solve(){ // 1  d+1 2d+1 (d+1)(2d+1)
  int d ; cin >> d;
  int n1 = d+1,n2 = -1;
   if(isPrime(n1)){
        n2 = n1+d;
       if(isPrime(n2)) {
        cout<<n1*n2<<endl; return;
       }
       else{
           while(isPrime(n2)==false){
             n2++;
           }
           cout<<n1*n2<<endl;
       }
   }
   else{
            while(isPrime(n1)==false){
             n1++;
           }
           n2 = n1+d;
            while(isPrime(n2)==false){
             n2++;
           }
           cout<<n1*n2<<endl;
   }
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}