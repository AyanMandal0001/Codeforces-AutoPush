#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
  int n , k , a , b; cin >> n >> k >> a >> b;
        k--; a--; b--;
  vector<pair<int,int>> v;
  pair<int,int> st ,end;
    for(int i=0;i<n;i++){
    int x,y; cin >> x >> y;
    if(i<=k){
        v.push_back(make_pair(x,y));
    }
     if(i==a){
        st = {x,y};
    }
    if(i==b){
        end = {x,y};
    }
 }
 int d1 =1e18,d2=1e18;
  for(int i=0;i<v.size();i++){
    d1 = min(d1,abs(v[i].first-st.first)+abs(v[i].second-st.second));
    d2 = min(d2,abs(v[i].first-end.first)+abs(v[i].second-end.second));
  }
  cout << min(d1+d2,abs(st.first-end.first)+abs(st.second-end.second)) << endl;
  

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}