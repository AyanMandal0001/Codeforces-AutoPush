#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
    int n ; cin >> n;
  string s ; cin >> s;
   map<char,int>mp;
          mp['('] = 1;
          mp[')'] = -1;     
       stack<int> st;
       bool is_balan = true;

       for(auto v:s){
        int val = mp[v];
        if(val > 0){
            st.push(val);
        }
        else{
            if(!st.empty() && st.top()+val==0){
                st.pop();
            }
            else{
                is_balan= false;
            }
        }
       }
       cout << st.size() << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}