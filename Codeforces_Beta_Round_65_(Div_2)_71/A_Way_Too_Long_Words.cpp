#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
   string s; cin >> s;
   if(s.size() > 10){
         cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
   }
   else{
    cout << s << endl;
   }
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}