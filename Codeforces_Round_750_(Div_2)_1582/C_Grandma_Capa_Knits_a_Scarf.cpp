#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

string s;
 int cnta,cntb,ans;

bool check(int l,int r){
    cnta=0,cntb=0,ans=1e9;

   if(l>r){ ans = 0;return true;}

 int a=s[l] , b=s[r];
 int flaga=1,flagb=1;
 int lo=l,hi=r;
 while(lo<=hi){
   if(s[lo]==s[hi]){ lo++; hi--; }
   else{ 
        if(s[lo]==a){ lo++;cnta++;}
       else if(s[hi]==a){ hi--;cnta++;}
       else {
         flaga=0;
         break;
       }
   }
 }

 lo=l,hi=r;
  while(lo<=hi){
   if(s[lo]==s[hi]){
      lo++;
      hi--;
   }
   else{
          if(s[lo]==b){ lo++;cntb++;}
       else if(s[hi]==b){ hi--;cntb++;}
       else {
         flagb=0;
         break;
       }
   }
 }

 if(flaga==1) ans=min(ans,cnta);
 if(flagb==1) ans=min(ans,cntb);

 return flaga||flagb;
}
void solve(){
 int n ; cin >> n;
 cin >>s;
 int l=0,r=n-1;
 while(l<=r){
   if(s[l]==s[r]) {
      l++;
      r--;
   }
   else{
        break;
   }
 }
 if(check(l,r)) cout<<ans<<endl;
      else cout<<"-1"<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}