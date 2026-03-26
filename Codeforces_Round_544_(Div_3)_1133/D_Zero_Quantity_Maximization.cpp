#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
struct frac{
   pair<int,int> data;
   void reduce_frac(){
    // -2/-3 == 2/3    2/-3 == -2/3
      if(data.second < 0){
         data.first *= -1;
         data.second *= -1;
      }
       if(data.second==0){// -b[i]/a[i]  1/0 == 2/0 ->undefinded
        data.first==1;
      }
    else  if(data.first==0){ // 0/something  -> 0
        data.second = 1;
      }
      else{
          int gcd = __gcd(abs(data.first),abs(data.second));
             data.first /= gcd;
             data.second /= gcd;
        }
      }
   void init(int num,int den){ 
        data ={num,den};
        reduce_frac();
   }
};
bool is_greater_than(pair<int,int>a,pair<int,int>b){
    return a.first*b.second > b.first*a.second;
}
void solve(){
  int n ; cin >> n;
  int arr[n]; int brr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  for(int i=0;i<n;i++) cin >> brr[i];

  map<pair<int,int>,int> frq;
  int fixed_zeroes = 0;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
        if(brr[i]==0){
             fixed_zeroes++;
        }
        else{ //ignoring this part
            continue;
        }
    }
    else{
         frac ff;
    ff.init(-brr[i],arr[i]);
    frq[ff.data]++;
    }
  }
  int max_zeroes = 0;
  for(auto v:frq){
      max_zeroes = max(max_zeroes,v.second);
  }
 int ans = max_zeroes+fixed_zeroes;
 cout << ans <<"\n";
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   // int tt; cin>>tt;while(tt--)
         solve();
}