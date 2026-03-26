#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define ll long long

// *******************************************************************************//
void solve(){
 ll n ; cin >>n;
 vector<ll>arr(10,0);
    for (int i = 0; i <= 9; i++)// 1 2 3 4 5 6 7 8 9 0
    {
       arr[n%10]++;
       n/=10;
    }
    ll ans = 0LL;
     for(int i=9;i>=0;i--){ // 9 8 7 6 5 4 3 2 1 0
            for(int j=i;j<10;j++){
              if(arr[j]!=0){
                arr[j]--;
                cout<<j;
                break;
              }
            }      
     }
     cout << endl;
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