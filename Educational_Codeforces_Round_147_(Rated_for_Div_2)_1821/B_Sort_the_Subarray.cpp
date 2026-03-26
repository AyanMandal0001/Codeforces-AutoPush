#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
ll mod = 1e9+7;
void solve(){
 ll n ; cin >> n;
 ll aa[n],bb[n];
 for(ll i=0;i<n;i++){ cin >> aa[i];}
 for(ll i=0;i<n;i++){  cin >> bb[i]; }
 int l=0,r=n-1;
 while(l<n&&aa[l]==bb[l]) l++;
 while(r>0&&aa[r]==bb[r]) r--;
 while(l>0&&bb[l]>=bb[l-1])l--;
 while(r<n-1&&bb[r]<=bb[r+1])r++;
 cout << l+1 <<" "<< r+1 <<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}