#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
 ll f(ll a,ll b){
    return (a+b-1)/b;
 }
void solve(){
 ll n ;cin >> n;
 ll aa[n];
 ll ele = -1;
 priority_queue<ll>pq;
 for(ll i=0;i<n;i++) {
    int x; cin >> x;
    if(i==0) ele = x;
    else{
        if(x>ele) pq.push(-x);
    }
 }
  while(!pq.empty()){
    ll val = pq.top();
    val *= -1;
    ll diff = val - ele;
    ele += f(diff,2);
     pq.pop();
  }
  cout << ele << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll tt; cin>>tt;while(tt--)
         solve();
}