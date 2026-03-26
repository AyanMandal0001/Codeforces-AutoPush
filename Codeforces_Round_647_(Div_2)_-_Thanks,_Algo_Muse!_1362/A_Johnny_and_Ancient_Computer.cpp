#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
  int a , b ; cin >> a >> b; // a->b;
  if(a ==b){
    cout<<0<<endl;
  }
  else if(a > b){
           int ans = 0;
        while(a > b){
          if( a % 8 == 0 and a/8 >= b){ a/= 8 ; ans++;}
          else if(a % 4 ==0 and a/4 >= b ) {a /= 4; ans++;}
          else if(a % 2 == 0 and a/2 >= b) {a /= 2; ans++;}
          else break;
        }
   if(a==b)  cout<<ans<<endl;
   else cout<<-1<<endl;
       }
  else{ // b > a
        int ans = 0;
        while(b > a){
          if( b % 8 == 0  and b/8 >= a){ b/= 8 ; ans++;}
          else if(b % 4 ==0 and b/4 >= a) {b /= 4; ans++;}
          else if(b % 2 == 0 and b/2 >= a) {b /= 2; ans++;}
           else break;
        }
        if(b==a)  cout<<ans<<endl;
       else cout<<-1<<endl;
  }
}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}