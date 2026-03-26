#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(){
 int n ; string s; cin >> n >> s;
  int seen[26];
  memset(seen,-1,sizeof(seen));
  int ans = 0;
  for(int i=0;i<n;i++){
    if(seen[s[i]-'a']==-1){
        seen[s[i]-'a'] = 1;
        ans += n - i;
    }
  }
  cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}