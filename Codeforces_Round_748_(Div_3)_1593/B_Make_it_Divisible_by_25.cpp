#include <bits/stdc++.h>
using namespace std;

// *******************************************************************************//
int op(string s,string t){
    int ops = 0,check_index=t.size()-1;;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == t[check_index]){
            check_index--;
            if(check_index < 0) break;
        }else{
            ops++;
        }    
    }
    if(check_index >= 0) ops = INT_MAX;
    return ops;
}
void solve(){
  string s; cin >> s;
    // last part can be 25 50 75 100
    vector<string> arr={"00", "25", "50", "75"};
    int ans=INT_MAX;
    for(int i=0;i<arr.size();i++){
        ans = min(ans,op(s,arr[i]));
    }
      cout << ans << endl;
}
int main(){
 // O( 4 * 18) = O(72) = O(1)
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}