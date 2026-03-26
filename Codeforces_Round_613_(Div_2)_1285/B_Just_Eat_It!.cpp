#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
 ll n ; cin >> n; ll arr[n],p[n],s[n]; 
 for(ll i=0;i<n;i++) cin >> arr[i];
 
   p[0]=arr[0] , s[n-1]=arr[n-1];
   for(int i=1;i<n;i++){
      p[i]=p[i-1]+arr[i];
   }
   for(int i=n-2;i>=0;i--){
      s[i]=s[i+1]+arr[i];
   }
   for(int i=0;i<n;i++){
      if(p[i]<=0||s[i]<=0) {
         cout <<"NO"<<endl; return;
      }
   }
  cout <<"YES"<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}