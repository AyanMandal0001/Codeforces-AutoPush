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
bool solve(vector<int>&a,int n,int k){
  for(int i=1;i<n;i++){
    if(k< 2 && a[i-1]>a[i]) return false;
  }
  return true;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {   int n,k; cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
       if(solve(a,n,k)==1) cout<<"YES"<<endl ;
       else cout<<"NO"<<endl;
    }
}