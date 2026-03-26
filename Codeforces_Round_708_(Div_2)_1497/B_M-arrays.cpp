#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll mod = 1e9+7;

void solve(){
    ll n,m; cin>>n>>m;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll x; cin >> x;
        ll t = x % m;
        mp[t]++;
    }
    // if m is ev and mp[m/2]!=0 then cnt++;
    ll cnt = 0;
    if(mp[0]>0) cnt++;
    if(m%2==0 && mp[m/2]>0) cnt++;
   // cout << cnt << endl;
    for(int i=1;i<(m+1)/2;i++){
     ll f1 = mp[i];
     ll f2 = mp[m-i];
     //cout<<"PR:" <<i<<" "<<f1<<endl<<m-i<<" "<<f2<<endl;
     if(f1==0&&f2==0) continue;
      cnt += 1 + max(0ll,abs(f1-f2)-1);
    }
    cout << cnt << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}