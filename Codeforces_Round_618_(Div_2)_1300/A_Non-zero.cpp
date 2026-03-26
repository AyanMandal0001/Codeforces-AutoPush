#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n ; cin>>n;
  int cnt0 = 0;
  int sum = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i++){
    cin>>a[i];
    sum += a[i];
    if(a[i]==0) cnt0++;
  }
  if(sum==0 && cnt0==0)cout<<"1"<<endl;
  else if(sum<0 && cnt0==0) cout<<"0"<<endl;
 else if(sum>0 && cnt0 >=0) cout<<cnt0<<endl;
 else if(sum ==0 && cnt0 != 0){
     cout<<max(cnt0,1)<<endl;
 }
 else if(sum< 0 && cnt0 != 0){
   if(abs(sum)!=cnt0) cout<<cnt0<<endl;
   else if(abs(sum)==cnt0) cout<<cnt0+1<<endl;
 }
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}