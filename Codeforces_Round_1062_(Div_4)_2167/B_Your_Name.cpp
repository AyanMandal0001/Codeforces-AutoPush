#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
   int n ; string s , t; cin >> n >> s >> t;
   sort(s.begin(),s.end());
   sort(t.begin(),t.end());
   if(s==t) cout <<"YES"<<endl;
   else cout <<"NO"<< endl;

}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}