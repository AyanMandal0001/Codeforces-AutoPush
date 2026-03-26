#include <bits/stdc++.h>
using namespace std;

// *******************************************************************************//
bool comp(pair<int,int>&a,pair<int,int>&b){
  if(a.first != b.first) return a.first > b.first;
  else  return a.second < b.second;
}
void solve(){
 int n ,k; cin >> n >> k;
  vector<pair<int,int>>v;
  for(int i=0;i<n;i++){
    int x; cin >> x;
    if(x%k==0)   v.push_back({k,i+1});
     else   v.push_back({x%k,i+1});
  }
  sort(v.begin(),v.end(),comp);
  for(int i=0;i<v.size();i++){
    cout <<v[i].second<<" ";
  }
  cout <<endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}