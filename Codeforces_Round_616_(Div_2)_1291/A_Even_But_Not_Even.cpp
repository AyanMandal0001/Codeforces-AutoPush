#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pb push_back
#define pback pop_back
#define all(w) w.begin(), w.end()
#define sp ' '
void solve()
{
    ll n; string s; cin >> n >> s;
    ll r = n-1;
    while (r>=0&&(s[r]-'0')%2==0) r--;
    if (r < 0) {cout << -1 << endl; return;}
    string ans = "";
    for(ll l=r-1;l>=0;l--){
        ll d = s[l]-'0';
        if(d%2){ ans=s.substr(l,r-l+1);break;}
    }
    if(ans==""){cout << -1 << endl; return;}
    cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt;cin >> tt; while (tt--)
        solve();
}