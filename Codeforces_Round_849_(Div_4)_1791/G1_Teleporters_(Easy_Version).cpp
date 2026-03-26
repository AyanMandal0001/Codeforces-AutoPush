#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 //There is a teleporter located on  points 1,2,…,n
void solve(){
   int n , c ; cin >> n >> c;
   int arr[n];
   vector<int>cost;
   for(int i=0;i<n;i++){
    cin >> arr[i];
   }
   for(int i=0;i<n;i++){
     int cos = (i+1)+arr[i];
     cost.push_back(cos);
   }
   sort(cost.begin(),cost.end());
   for(int i=1;i<n;i++){
    cost[i] += cost[i-1];
   }
   int it = upper_bound(cost.begin(),cost.end(),c)-cost.begin();
   cout << it << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}