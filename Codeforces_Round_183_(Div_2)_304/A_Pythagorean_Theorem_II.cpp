#include <bits/stdc++.h>
using namespace std;
// *******************************************************************************//
bool isPerfectSquare(int n) {
    int x = sqrt(n);
    return (x * x == n);
}
void solve(){
  int n ; cin >> n;
  int cnt = 0;
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
        if(isPerfectSquare(i*i+j*j) and sqrt(i*i + j*j )<= n){
           cnt++;
        }
    }
  }
  cout<<cnt<<endl;
}
int main(){

  

    int tt=1;
    // cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}