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
  int n; cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  unordered_map<int,int>mpp;
  for(int num : a){
    mpp[num]++;
  }
  int no_of_uniueElement = mpp.size();
  if(no_of_uniueElement == 1) cout<<"Yes"<<endl;
  else if(no_of_uniueElement == 2  ){ 
    int copy = a[0];
    int cnt1= 0, cnt2 = 0;
    for(int i=0;i<n;i++){    if(a[i]==copy) cnt1++;     else cnt2++;   }
  if(abs(cnt1-cnt2) <= 1)  cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
  else cout<<"No"<<endl;
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