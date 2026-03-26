#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define endl "\n"
void solve(){
  string s ; cin>>s;
  int n = s.length();
  if(s[0]<='Z' && s[0]>='A'){
    cout <<s << endl; return;
  }
  s[0] = char('A'+(s[0]-'a'));
  cout << s << endl;
}
signed main(){
  // int tt; cin >> tt; while(tt--)
     solve();
}