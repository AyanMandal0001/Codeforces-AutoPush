#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n ; cin >> n;
    int num = 11*111 - 111 - 11;
    if(n > num ){
        cout << "YES" << endl;
    }
    else{ 
      for(int i=0;i<=100;i++){
        for(int j=0;j<=10;j++){
            if(i*11+j*111 == n){
                cout << "YES" << endl;
                return;
            }
        }
      }
    cout << "NO" << endl;
    }   
}
signed main(){
    int tt ; cin >> tt; while(tt--)
       solve();
}