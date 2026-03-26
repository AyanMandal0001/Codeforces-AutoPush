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
 int w,d,h,a,b,f,g; cin>>w>>d>>h>>a>>b>>f>>g;
  cout<<min({h+b+g+abs(a-f),h+a+f+abs(b-g),
  h+d-b+d-g+abs(a-f),h+w-a+w-f+abs(b-g)})<<endl;
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