#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
 ll  n ; cin >> n ;
 ll arr[n];
 for(ll i=0;i<n;i++)  cin >> arr[i];  
 if(n==1){cout <<"NO"<<endl; return;}
   set<ll>st;
   st.insert(0);// 0 sum is possible
   ll s = 0ll;
   for(ll i=0;i<n;i++){
      if((i+1)%2==0) {s += arr[i];} // 
      else {s -= arr[i];}

      if(st.count(s)) {
         cout <<"YES" <<endl; return;
      }
      st.insert(s);
   }
   cout << "NO" <<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}