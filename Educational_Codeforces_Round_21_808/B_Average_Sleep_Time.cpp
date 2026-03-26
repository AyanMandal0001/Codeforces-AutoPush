#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
 long long n , k ; cin >> n >> k; 
 long long arr[n];
 for(int i=0;i<n;i++){
    cin >> arr[i];
 }
 long long s = 0;
 long long ans = 0;
 long long weeks = (n-k+1);
   for(int i=0;i<k;i++){
     s += arr[i];
   }
   ans += s;
   for(int i=k;i<n;i++){
      s += arr[i];
      s -= arr[i-k];
      ans += s;
   }
  // cout <<"pr:"<< ans<<" "<< weeks << endl;
   long double avg =(long double)ans/(long double)weeks;
   cout <<fixed<<setprecision(10)<< avg << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  //  int tt; cin>>tt;while(tt--)
         solve();
}