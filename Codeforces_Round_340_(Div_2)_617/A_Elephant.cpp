// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
//  #define pb push_back
//  #define pback pop_back
//  #define all(w) w.begin(),w.end()
// #define sp ' '
// ll mod = 1e9+7;

// // *******************************************************************************//
// void solve(){
//   ll n ; cin >> n;
//   ll aa[n]; ll s = 0;
//   for(ll i=0;i<n;i++){
//     cin >>aa[i]; s+=aa[i];
//   }
//   if(s%2) {cout << "NO"<<endl;return;}
  
// }
// signed main(){

//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

//    // ll tt; cin>>tt;while(tt--)
//          solve();
// }

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
 ll n ; cin >> n;
 ll rem = n % 5;
ll ans  = n /5;
 if(rem) ans++;
 cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  //  ll tt; cin>>tt;while(tt--)
         solve();
}