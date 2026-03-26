#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve(){
  int n ;  cin >>  n;
  vector<int>arr(n); 
  int maxi = -1;
  for(int i = 0;i < n; i++){
    cin >> arr[i];  
    maxi = max(arr[i],maxi);
  }

  for(int i=0;i<n;i++){
   if(arr[i]==maxi) continue;
   else maxi &= arr[i];
   
  }
 cout << maxi << endl;
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    { 
      
        solve();
    }
}