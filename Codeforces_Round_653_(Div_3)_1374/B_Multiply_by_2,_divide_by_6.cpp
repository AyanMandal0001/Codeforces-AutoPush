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
int cnt_noOfDigits(int num){
return log10(num)+1 ;
}
void swap(int &a,int &b){
 // a = a + b -(b=a);
 a = a ^ b;
 b = a ^ b;
 a = a ^ b;
}
void solve(){
  int n; cin>> n;
  int cnt2 = 0,cnt3 = 0 ;
 for (int i = 0; i <= 30; i++)
 {
   if( n % 3 ==0) {n /= 3 ;cnt3++; }
  if( n % 2 ==0) {n /= 2 ;cnt2++;}
 }
 if( n==1 &&  cnt3 >= cnt2){
    cout<<cnt3+cnt3-cnt2<<endl;
 }
 else cout<<-1<<endl;
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