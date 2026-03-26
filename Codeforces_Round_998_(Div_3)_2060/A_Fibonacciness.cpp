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
int solve(int a1,int a2,int a4,int a5){
 
  int cnt = 0;

  if(a1+a2==a5-a4) cnt++;
  if(a1+a2==a4-a2) cnt++;
  if(a4-a2==a5-a4) cnt++;

  return cnt;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
     {    int a1,a2,a4,a5;
         cin>>a1>>a2>>a4>>a5;
        if(solve(a1,a2,a4,a5)==3) cout<<solve(a1,a2,a4,a5)<<endl;
        else cout<<solve(a1,a2,a4,a5)+1<<endl;
    }
}