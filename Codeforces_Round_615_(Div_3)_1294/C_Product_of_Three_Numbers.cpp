#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
 int n ; cin >> n; //  a , b , c >= 2  && a.b.c = n
  vector<int>v;
  int cnt = 0;
  for(int i=2;i<=sqrt(n);i++){
    if(cnt==2) break;
   if(n%i==0){
     v.push_back(i);
     n /= i;
     cnt++;
   }
  }
  if(v.size()==2 && n > 0){
     v.push_back(n);
     if(v[0]!=v[1] && v[1]!=v[2]){
        cout <<"YES"<<endl;
        cout << v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
     }
     else cout <<"NO"<<endl;
  }
  else cout<<"NO"<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}