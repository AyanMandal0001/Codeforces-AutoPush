#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
 int n ; cin >> n;
 int a[n],b[n],r[n];
 vector<int>v;
 int maxi = -1e18;
 for(int i=0;i<n;i++){
    cin >> a[i];
 }
 for(int i=0;i<n;i++){
    cin >> b[i];
 }

 for(int i=0;i<n;i++){
    r[i]=a[i]-b[i];
    maxi = max(maxi,r[i]);
 }

 for(int i=0;i<n;i++){
    if(r[i]==maxi) v.push_back(i+1);
 }
 cout << v.size() << endl;
 for(int i=0;i<v.size();i++){
    cout << v[i] <<" ";
 }
 cout << endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}