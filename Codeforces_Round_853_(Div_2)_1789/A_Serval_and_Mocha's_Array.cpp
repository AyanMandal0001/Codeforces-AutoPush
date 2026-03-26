#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool condition(vector<int>arr){
  int n = arr.size();
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(__gcd(arr[i],arr[j]) <= 2){  return true;}
    }
  }
  return false;
}
void solve(){
    int n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
      cin >> arr[i];
    }
    
    if(condition(arr)) {
            cout <<"Yes"<<endl;
               return;
            }
     else {
            cout <<"No"<<endl;
                 return;
         } 
}
signed main(){
 // T.C  -> 2 X 10^5      n ->10 ^ 2 means O(n^2) is allowed
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t=1;
    cin>>t;// 500                  
    for (int i = 0; i < t; i++)
    { 
        solve();
    }
}