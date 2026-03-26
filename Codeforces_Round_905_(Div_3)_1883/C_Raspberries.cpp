#include <bits/stdc++.h>
using namespace std;

// *******************************************************************************//
void solve(){
 int n, k; cin >> n >> k;
    vector<int> arr(n);
    int mini = INT_MAX;
    int cnt_odd  = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 != 0){
            cnt_odd++;
        }     
    }
    if(k ==4){
          for(int i = 0; i < n; i++){
            arr[i] = arr[i] % k;
            if(arr[i] % k != 0) {arr[i] = k - arr[i];}       
            mini = min(mini, arr[i]);   
        }
        int cnt_even = n-cnt_odd;
        if(cnt_even >= 2) mini = min(mini, 0);
        if(cnt_even ==1 and cnt_odd >=1) mini = min(mini, 1);
        if(cnt_even == 0 and cnt_odd >= 2) mini = min(mini, 2);
    }
    else{
        for(int i = 0; i < n; i++){
            arr[i] = arr[i] % k;
            if(arr[i] % k != 0) {arr[i] = k - arr[i];}       
            mini = min(mini, arr[i]);   
        }
    }   
  cout << mini << "\n";     
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