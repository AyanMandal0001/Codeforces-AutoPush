#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
void solve(){
  int n , s ; cin >> n >> s; int TotS = 0;
  int arr[n],p[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
    TotS += arr[i];
  }
  if(TotS < s ) {
    cout << - 1 << endl; return;
  }
  if( TotS == s){
    cout << 0 << endl; return;
  }
  int i = 0,sum=0;
  while(sum<s){
    sum += arr[i];
    i++;
  }
  int ans = n-i;// element from 0 to i-1 is i and to make sum s we have to delete n-i elements
  int l = 0;
    while(i<n){
      sum += arr[i];
    while(sum>s){
      sum -= arr[l];
      l++;
    }
    if(sum==s){ int len = i-l+1;
    ans =min(ans,n-len);
    }
     i++;
    } 
   cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}