#include <bits/stdc++.h>
using namespace std;

// *******************************************************************************//
int cnt1(string &s){
    int cnt = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '1') cnt++;
    }
    return cnt;
}
void solve(){
   int n ; cin >> n;
   string s ; cin >> s; // n = s.size();
   string copy=s;
   int ans = 0;
   for(int i=0;i<n;i++){
     if(s[i]=='0') s[i]='1';
     else s[i]='0';
     ans += cnt1(s);
         s = copy;
   }
   cout <<ans<<endl;
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