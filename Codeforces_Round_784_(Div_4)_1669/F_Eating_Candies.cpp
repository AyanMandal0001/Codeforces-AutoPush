// https://codeforces.com/problemset/problem/1669/F
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 int n ;
 int arr[1000100];
void solve(){
  cin >> n;
  for(int i=0;i<n;i++) cin>>arr[i];
  int i = -1 , j = n;
  int l = 0 , r = 0;
  int ans = -1,temp=0;
  while(i<j){
    if(l==r){
    ans = max(ans,temp);
       if(i+1<j-1) {
        i++;
        j--;
         l += arr[i];
         r += arr[j];
         temp += 2; 
        // ans = max(ans,temp);    
       }
       else break;
    }
    else if(l>r){
       if(i<j-1) {j--;r += arr[j];temp++;}
       else break;
    } 
    else{ // r > l
         if(i+1<j) {i++;l += arr[i];temp++;}
       else break;
    }
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}