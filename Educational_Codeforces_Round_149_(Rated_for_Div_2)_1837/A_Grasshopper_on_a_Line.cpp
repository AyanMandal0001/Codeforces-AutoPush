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
void swap(int a,int b){
 // a = a + b -(b=a);
 a = a ^ b;
 b = a ^ b;
 a = a ^ b;
}

void solve(){
 int x , k; cin>>x>>k;
 
 if(x < k) cout<<1<<endl<<x<<endl;

 else {
    int moves = 0;
 vector<int>a;
 while(x> 0){
    for(int i=x;i>0;i--){
        if(x>=i && i % k != 0){
          x -= i;
          moves++;
          a.push_back(i);
        }
     }
 }
 cout<<moves<<endl;
 for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
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