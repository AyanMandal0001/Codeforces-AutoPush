#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
  int a , b ; cin >> a >> b;
  if(a ==b){
    cout<<1<<endl;
    return;
  }
  else if(a !=b && b==1){
    cout<<a<<endl;
    return;
  }
  else{ 
    int ans = 0;
   while(a > b){
       if(a%b==0){ans += a/b;break;}
       if(b==1){   ans += a;break;}
      ans += a/b;
      a = a%b;
      swap(a,b);   
   }
  cout << ans <<endl;
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  //  int tt; cin>>tt;while(tt--)
         solve();
}