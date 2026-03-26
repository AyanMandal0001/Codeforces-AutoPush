#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
  ll k , x ; cin >>  k >> x;
  ll mid = k*(k+1)/2;
  ll tot = k*k;
  if(x>=tot){
    cout << 2*k-1<<endl;
  }
  else if(x<tot && x>mid){ //p*(p+1) < 2*(k*k-x)
      ll lo = 1 , hi = k-1;
    ll ans = -1;
    while(lo<=hi){
    //   cout << lo<<" "<<hi<<endl;
        ll mid =(lo+hi)/2;
        if(mid*(mid+1) <= 2*(tot-x)){
             ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
 // cout << ans << endl;
    cout << 2*k-1 - ans << endl;
  }
  else{//p*(p+1) >= 2*x
    ll lo = 1 , hi = k ;
    ll ans = -1;
    while(lo<=hi){
      //  cout << lo <<" "<<hi<< endl;
        ll mid =(lo+hi)/2;
        if(mid*(mid+1) >= 2*x){
             ans = mid;
             hi = mid -1;
        }
        else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}