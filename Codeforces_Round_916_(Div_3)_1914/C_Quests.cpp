#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){// no of quest <= k
    int n , k ; cin >> n >> k;
  int a[n],b[n],suf[n],pre[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=0;i<n;i++){
    cin >> b[i];
  }
  suf[0]=b[0];
  for(int i=1;i<n;i++){
    suf[i]=max(suf[i-1],b[i]);
  }
  pre[0]=a[0];
  for(int i=1;i<n;i++){
    pre[i]=pre[i-1]+a[i];
  }
  int maxi = -1;
  for(int i=0;i<min(k,n);i++){ // we can go from index [0 ... k-1] if we go till i-th level then what is the max experi. he can gain
   int first_time_exp = pre[i];
   int second_time_exp = suf[i]*(k-(i+1));
 maxi = max(maxi,first_time_exp+second_time_exp);
  }
  cout << maxi << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}