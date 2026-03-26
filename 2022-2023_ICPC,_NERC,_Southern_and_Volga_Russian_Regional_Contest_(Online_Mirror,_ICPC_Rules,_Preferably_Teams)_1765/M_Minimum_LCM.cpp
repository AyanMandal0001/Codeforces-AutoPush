#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
  int n ; cin >> n;
  if(n % 2 == 0){
     cout<<n/2<<" "<<n/2<<endl;
  }
  else if(n%3==0){
        cout<<n/3<<" "<<n-n/3<<endl;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0 ){
                int a = n/i;
                int b = n-a;
                cout<<a<<" "<<b<<endl;
                return;
            }
        }
        cout <<1<<" "<<n-1<<endl;
  }
}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}