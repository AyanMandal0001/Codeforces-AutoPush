#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
 ll n,h;cin >>n>>h;
 ll aa[n];
 for(ll i=0;i<n;i++){
      cin >>aa[i];
 }
 ll cnt = 0,flag=0;
 for(ll k=1;k<=n;k++){
    cnt++;
    vector<int>v; ll tot = 0;
     for(ll i=0;i<k;i++)v.pb(aa[i]);
     sort(all(v));
     for(int i=k-1;i>=0;i--){
       if(i-1>=0) {tot += v[i] ; i--;}
       else tot += v[i];
     }
     if(tot>h){flag=1; break;}
 }
 if(flag) cout << cnt-1<<endl;
 else cout << n <<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 //   ll tt; cin>>tt;while(tt--)
         solve();
}