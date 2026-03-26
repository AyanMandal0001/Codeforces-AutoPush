#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
void solve(){
   // prefix[i] + d*(i+1) <= x
   // d <= (x - prefix[i]) / (i+1)
   //  days = floor((x - prefix[i]) / (i+1)) + 1
   //  +1 bcz day counting starts from 0
 ll n,x;cin>>n>>x;
 ll aa[n]; ll cnt = 0;
 for(ll i=0;i<n;i++){
    cin >> aa[i];
 }
 sort(aa,aa+n);

 ll pre = 0;
 for(ll i=0;i<n;i++){
   pre += aa[i];
   if(pre > x) break;
   cnt += ((x-pre)/(i+1)) + 1;
 }
//  ll iter = 0;
//  ll firstele  = aa[0];
//  ll cnt = 0;
//  ll lo = 0 , hi = n-1;
//    ll ans = -1;
//    while(lo<=hi){
//       ll mid = (lo+hi)/2;
//       if(pp[mid]+iter*(mid+1)<=x){
//         ans = mid;
//         lo = mid+1;
//       }
//       else{
//        hi = mid -1;
//       }
//    }
//    while((ans+1)>0){
//         while(pp[ans]+iter*(ans+1)<=x){ iter++;cnt+=(ans+1);firstele++;}
//         ans--;
//    }
//  while(x>=firstele){
//    ll lo = 0 , hi = n-1;
//    ll ans = 0;
//    while(lo<=hi){
//       ll mid = (lo+hi)/2;
//       if(pp[mid]+iter*(mid+1)<=x){
//         ans = mid;
//         lo = mid+1;
//       }
//       else{
//        hi = mid -1;
//       }
//    }
//    while(pp[ans]+iter*(ans+1)<=x){ iter++;cnt+=(ans+1);firstele++;}
//  }
 cout << cnt << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}