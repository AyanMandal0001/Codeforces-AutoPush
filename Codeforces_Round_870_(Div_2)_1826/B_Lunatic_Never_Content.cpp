#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,b%a);
}
void solve(){
 int n ; cin >> n;
 int aa[n];
 for(int i=0;i<n;i++){
    cin >> aa[i];
 }
 if(n==1) {cout<<0<<endl;return;}
 int ans=1;
 for(int i=0;i<n/2;i++){
    int val=abs(aa[i]-aa[n-1-i]);
    if(i==0) ans=val;
    else ans=gcd(ans,val);
 }
 cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}