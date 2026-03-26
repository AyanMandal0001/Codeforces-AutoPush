//https://codeforces.com/problemset/problem/1618/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int n ; int arr[1000100];
bool cond(int arr[],int n,int k){
    for(int i=1;i<n;i++){
    if(arr[i]%k==arr[i-1]%k) return false; 
   }
   return true;
}
void solve(){
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int f = arr[0];
    for(int i=2;i<n;i+=2){
       f=__gcd(arr[i],f);
    }
    int s = arr[1];
     for(int i=3;i<n;i+=2){
       s=__gcd(arr[i],s);
    }
    if(cond(arr,n,f)) cout << f  << endl;
  else if(cond(arr,n,s)) cout << s  << endl;
    else cout << 0 << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}