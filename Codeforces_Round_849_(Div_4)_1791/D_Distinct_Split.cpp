#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
 int n; string s; cin >> n >> s;
  //  vector<int> cnt(26, 0), p(26, 0);
    int cnt[26] = {0}; 
    int p[26] = {0}; 
    for(auto x: s) cnt[x - 'a']++;
    int ans = 0;
    for(auto x: s) {
        // splitting the string in all possible ways
        // if we take a as whole string, then we will take b as empty string but in that case cur will be minimum so it will not be considered; same thing happens if we take b as whole string and a as empty string
        --cnt[x - 'a'];
        ++p[x - 'a'];
        int cur = 0;
        for(int i = 0; i < 26; ++i) {
    // this line counts how many distinct characters are in the prefix
 // and how many distinct characters are in the suffix
            cur += min(1ll, cnt[i]) + min(1ll, p[i]);
        }
        ans = max(ans, cur);
    }
    cout << ans << "\n";
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}