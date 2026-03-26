#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
ll mod = 1e9+7;
ll gcd(ll a,ll b){ if(b==0) return a;return gcd(b,a%b);}
ll lcm(ll a,ll b){ return a*b/gcd(a,b);}
void solve(){
  ll n,x,y; cin >> n>>x>>y;
    ll c = x*y; 
  ll cntofx = n / x ;
  ll cntofy = n / y ;
  ll cnt = n/(lcm(x,y));
  if(x==1||y==1){
    if(x==1){
        ll sum = n * (n+1)/2;
         sum -= cntofy * (cntofy+1)/2;
         cout << sum << endl;
    }
    else{//y == 1
      ll sum =  - (n-cntofx)*(n-cntofx+1)/2;
       cout << sum <<endl;
    }
    return;
  }

  ll xsum = n*(n+1)/2 - (n-cntofx)*(n-cntofx+1)/2;
  ll csum = cnt*(n-cntofx)+ cnt*(cnt+1)/2;
  ll remycnt  = cntofy - cnt ;
  ll remysum = remycnt *(remycnt+1)/2;
  ll ans = xsum - csum - remysum ;
cout << ans << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}