#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
  int  n ;cin >> n;
  vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<int,int>mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    int cnt = 0;
    for(auto it : mp){
        if(it.second >= 2){
           cnt += it.second/2;
        }
    }
    cout<< cnt << endl;
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}