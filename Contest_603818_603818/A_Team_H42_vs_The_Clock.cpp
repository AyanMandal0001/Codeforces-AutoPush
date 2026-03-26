#include<bits/stdc++.h>
using namespace std;

void solve(){
      int n = 4;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin >> arr[i];  
      }
      sort(arr.begin(),arr.end());
    
      if(arr[0]+arr[1] <= 90 && arr[2] <= 90 && arr[3] <= 90) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

}

int main(){
    solve();
    return 0;
}