#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '

void solve(){
 ll n,q;cin >>n>>q;
 ll aa[n]; ll s = 0,ele = -1;
 map<ll,ll>mp;
 for(ll i=0;i<n;i++){
    cin>>aa[i]; s += aa[i];
 }
// cout << s << endl;
 for(ll i=0;i<q;i++){
   ll type ;cin >> type;
   if(type==1){ ll pos,val;cin >>pos>>val; pos--;
     // cout <<"Pr:"<< pos <<" "<<val<<endl;
       if(i==0) s -= aa[pos];
     else if(mp.find(pos)!=mp.end()) {s -= mp[pos];}
      else if(mp.size()==0||ele != -1) {s -= ele;}
      else  s -= aa[pos];
      s += val;
       mp[pos]=val;
   }
   else{ ll val ; cin >> val;
     mp.clear();
     s = n * val ; ele = val;
   }
   cout << s << endl;
 }
 
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // ll tt; cin>>tt;while(tt--)
         solve();
}