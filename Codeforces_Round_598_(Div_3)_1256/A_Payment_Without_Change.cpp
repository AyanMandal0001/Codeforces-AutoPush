#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
// *******************************************************************************//
void solve(){
  ll a , b , n , s; cin >> a >> b >> n >> s;
  if( a * n + b >= s){
    if( a *n <= s){
        cout<<"YES"<<endl; return;
    }
    else{ // a*n > s
      if( s - (s/n)*n <=b){    cout<<"YES"<<endl;return;   }
      else{  cout<<"NO"<<endl; return;  }
    }
  }
 else{
    cout << "NO" << endl;
 }
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll tt=1;
    cin>>tt;
    for (ll i = 0; i < tt; i++)
    {
        solve();
    }
}