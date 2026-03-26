#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll f(ll a,ll b) {return (a+b-1)/b;}
void solve(){
 ll n,k; cin>>n>>k;
 ll aa[n];
 for(ll i=0;i<n;i++){
    cin >>aa[i];
 }
 ll ele = 0;
 for(ll i=0;i<n;i++){
    if(aa[i]==ele+1) ele++;
 }
 ll rem = n - ele;
 ll op = f(rem,k);
 cout <<op<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}