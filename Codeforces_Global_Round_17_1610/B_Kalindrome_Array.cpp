#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 int arr[200010];
bool check(int l,int r){
   if(l>r) return true;
 int a=arr[l] , b=arr[r];
 int flaga=1,flagb=1;
 int lo=l,hi=r;
 while(lo<=hi){
   if(arr[lo]==arr[hi]){ lo++; hi--; }
   else{
        if(arr[lo]==a) lo++;
       else if(arr[hi]==a) hi--;
       else {
         flaga=0;
         break;
       }
   }
 }
 lo=l,hi=r;
  while(lo<=hi){
   if(arr[lo]==arr[hi]){
      lo++;
      hi--;
   }
   else{
        if(arr[lo]==b) lo++;
       else if(arr[hi]==b) hi--;
       else {
         flagb=0;
         break;
       }
   }
 }
 return flaga||flagb;
}
void solve(){
 int n ; cin >> n;
 for(int i=0;i<n;i++){
    cin >> arr[i];
 }
 int l=0,r=n-1;
 while(l<=r){
   if(arr[l]==arr[r]) {
      l++;
      r--;
   }
   else{
        break;
   }
 }
 if(check(l,r)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}