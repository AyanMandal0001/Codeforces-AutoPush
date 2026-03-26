#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool con(vector<int>& ans){
    int n = ans.size();
    for(int i = 1; i < n; i++){
        if(ans[i] < ans[i-1]) return false;
    }
    return true;
}
void solve(){
    string s, t; cin >> s >> t;
    int n = s.size(); int m = t.size();  
    vector<vector<int>> occ(26);
    for(int i = 0; i < n; i++){
        occ[s[i] - 'A'].push_back(i);
    }   
    vector<int> ans(m);
    for(int i = m - 1; i >= 0; i--){
        int ind = t[i] - 'A';     
        if(occ[ind].empty()) {
            cout << "NO" << endl;
            return;
        }
        ans[i] = occ[ind].back();
     //   cout << ans[i] <<" ";
        occ[ind].pop_back();
    } 
    // cout << endl;
    //  for(int i=0;i<m;i++){
    //    cout <<ans[i]<<" ";
    //  }
    //  cout << endl;
    if(con(ans)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int tt; cin >> tt;while(tt--){
        solve();
    }
    return 0;
}
