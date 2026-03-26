#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
 ll n ; cin>>n; ll aa[n],bb[n],diff[n];
 for(ll i=0;i<n;i++) cin>>aa[i];
 for(ll i=0;i<n;i++) cin>>bb[i];
   for(ll i=0;i<n;i++) diff[i]=bb[i]-aa[i];
   sort(diff,diff+n);
   ll i=0;
   ll j=n-1; 
   ll cnt = 0;
   while(i<j){
      ll sum = diff[i]+diff[j];
      if(sum>=0){
        cnt++;
        i++;
        j--;
      }
      else{
        i++;
      }
   }
   cout << cnt << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}