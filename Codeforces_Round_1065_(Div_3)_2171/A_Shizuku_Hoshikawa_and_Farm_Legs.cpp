#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
  ll n ; cin >> n;
  ll cnt = 0;
  if(n%2!=0){
    cout << 0 << endl;
  }
  else{
     for(int i=0;i<=n/2;i++){
        int chi=i;
        int cow=(n-2*i);
        if(cow%4==0) cnt++;
     }
     cout << cnt << endl;
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}