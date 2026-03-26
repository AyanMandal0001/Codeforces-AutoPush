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
bool isSorted(vector<int>&a,int n){
    for (int i = 1; i < n; i++)
  {
    if( a[i]<a[i-1]) return false;
  }
  return true;
}
bool solve(vector<int>&a,int n){
    if(isSorted(a,n)==1) return true;
    else{        if(a[0]==1) return true;
    else return false;
    }
 
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    { int n; cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)    cin>>a[i]; 
        if(solve(a,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}