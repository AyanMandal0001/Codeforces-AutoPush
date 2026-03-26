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
 int n,x; cin>>n>>x;
 vector<int>a(n);
 for(int i=0;i<n;i++) cin>>a[i];

 int ans = 0;
 ans = max(ans,a[0]);
 ans = max(ans,2*(x-a[n-1]));
 for (int i = 1; i < n; i++)
 {
    ans = max(ans,a[i]-a[i-1]);
 }
cout<<ans<<endl;
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