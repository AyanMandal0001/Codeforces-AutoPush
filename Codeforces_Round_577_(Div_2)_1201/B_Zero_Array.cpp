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
 ll aa[n];ll s = 0;
 ll mele = 0;
 for(ll i=0;i<n;i++){
   cin>>aa[i];
   s += aa[i];
   mele = max(mele,aa[i]);
 }
 if(s%2==1){
  cout<<"NO"<<endl;
 }
 else {
    if(mele<=s-mele) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
}
 
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  //₹  ll tt; cin>>tt;while(tt--)
         solve();
}