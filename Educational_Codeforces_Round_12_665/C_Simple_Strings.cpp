#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
  string s; cin >> s; int n = s.size();
  set<int>st;
  for(int i=0;i<26;i++) st.insert(i);
  for(int i=1;i<n;i++){
    if(s[i]==s[i-1]) {
        if(i==n-1) { 
            st.erase(s[i-1]-'a');
           auto it=st.begin(); 
           int val = *it;
            s[i] = char('a'+val);
            st.insert(s[i-1]-'a');
            }
        else{ 
           st.erase(s[i-1]-'a');
           st.erase(s[i+1]-'a');
           auto it=st.begin(); 
           int val = *it;
            s[i] = char('a'+val);
            st.insert(s[i-1]-'a');
             st.insert(s[i+1]-'a');
          }
          
        }
    }
    cout << s << endl;
  }
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 //   int tt; cin>>tt;while(tt--)
         solve();
}