#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
// *******************************************************************************//
ll gcd(ll a,ll b){
    if(a==0) return b;
    return gcd(b%a,a);
}
ll lcm(ll a,ll b){
  return (a*b)/gcd(a,b);
}
void solve(){
  ll a , b ; cin >> a >> b;
  if(gcd(a,b)==1 && a!=1){
   cout << a*b<< endl;
  }else{
   if(a==1){
    cout << b*b<<endl;
   }
   else{
    ll t = lcm(a,b);
    if(t==b){
      cout << t*(t/a)<<endl;
    }else{
    //cout<<"PR:";
      cout <<t<<endl;
    }
   }
  }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll tt; cin>>tt;while(tt--)
         solve();
}