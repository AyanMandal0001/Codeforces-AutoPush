#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
void solve(){
   int n ; cin >> n;
   map<int,int> mp;
   vector<int>v;
   for(int i=0;i<n;i++){
     int x ; cin >> x;
     mp[x]++;
   }
   int ele = -1;
   int flag = 0;
   for(auto it=mp.begin();it!=mp.end();it++){
      if(it->second >= 2){
        ele = it->first;
        flag = 1;
        break;
      }
   }
     if(flag) {mp[ele] -= 2;if(mp[ele]==0) mp.erase(ele);}
    if(ele == -1 || flag == 0) {
    cout <<-1<<endl; return;
   }    
    for(auto it=mp.begin();it!=mp.end();it++){
        int ele1 = it->first;
        if(it->second >= 2){
           cout <<ele<<" "<<ele<<" "<<ele1<<" "<<ele1<<endl;
           return;
        }
   }
   // vector will be sorted in this case
   for(auto it=mp.begin();it!=mp.end();it++){
        int ele0 = it->first;
     if(mp[ele0] > 0)  v.push_back(ele0);
      }
      // necessary conditon abs(a-b) < 2c  a,b two //el sides and c is length of equal sides
   for(int i=0;i<v.size()-1;i++){
    if(abs(v[i+1]-v[i]) < 2*ele){
         cout <<ele<<" "<<ele<<" "<<v[i]<<" "<<v[i+1]<<endl;
         return;
    }
   }
  cout << -1 <<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}