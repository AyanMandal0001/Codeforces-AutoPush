#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 ll n , k ;
void solve(){
  cin >> n >>k; ll cnt = 0;
  vector<vector<ll>>grid(n,vector<ll>(n));
  for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
    cin >> grid[i][j];
   }
  }
  if(n%2==0){
          for(ll i=0;i<n/2;i++){
          for(ll j=0;j<n;j++){
              if(grid[i][j] != grid[n-1-i][n-1-j]) cnt++;
        }
        }
  }
  else{
          for(ll i=0;i<n/2;i++){
          for(ll j=0;j<n;j++){
              if(grid[i][j] != grid[n-1-i][n-1-j]) cnt++;
                }
              }
        for(ll j=0;j<n/2;j++){
          if(grid[n/2][j]!=grid[n/2][n-1-j]) cnt++;
        }
  }
  if( k >= cnt ){
    if(n%2){ 
      // as we can apply any # op. in  middle most cell 
      cout << "YES"<<endl;
    }
    else{ // n%2 == 1  excess op. need to be multiple of 2
        if((k-cnt)%2==0) cout << "YES"<<endl;
        else cout <<"NO" << endl;
    }
  }
  else  cout <<"NO" << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}