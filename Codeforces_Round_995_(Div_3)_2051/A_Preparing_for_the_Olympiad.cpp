#include <bits/stdc++.h>
using namespace std;
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x * y)/ gcd(x,y)
int cnt_div(int n){
  int cnt = 0;
for(int i=1;i<=sqrt(n);i++){
    if(n % i == 0){
  cnt ++;
if(i != n/i){
  cnt++;
 }
 }
 }
return cnt;
 }
void solve(){
  int n ; cin>>n;
  vector<int>a(n),b(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
   int sum1 = 0,sum2 = 0;
  for(int i=0;i<n;i++){
    if(a[i]>b[i+1] && i+1 < n) {
        sum1 += a[i];
        sum2 +=b[i+1];
    }
    else if(a[i]<b[i+1] && i+1 < n) continue;
    else if(i==n-1) sum1 += a[i];
  }
  cout<<sum1-sum2<<endl;
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