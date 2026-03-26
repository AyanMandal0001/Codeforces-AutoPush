#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// *******************************************************************************//
void solve(){
  ll n ; cin >> n;
    ll i=1LL;
   while(i<= n){
      if(n % i == 0) i++;
      else break;
   }
   cout<<i-1<<endl;
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