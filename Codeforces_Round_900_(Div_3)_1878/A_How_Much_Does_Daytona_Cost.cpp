#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,k;cin>>n>>k;
   vector<int>a(n);
//    unordered_map<int,int>mpp;
int cnt = 0;
   for (int i = 0; i < n; i++) { cin>>a[i];if(a[i]==k){cnt++;}}
//    for(auto it:a) mpp[it]++;
//    int mostFrequent = a[0];
//     int maxCount = 0;
//    for (auto pair : mpp) {
//     if (pair.second > maxCount) {
//         mostFrequent = pair.first;
//         maxCount = pair.second;
//     }
// }
//    if(mostFrequent==k ) cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;
if(cnt == 0) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}