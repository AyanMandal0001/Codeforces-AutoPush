#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n; 
     int mini=INT_MAX;
    vector<int>a(n);
    for(int i=0;i<n;i++){
         cin>>a[i];
         mini=min(mini,abs(a[i]));
    }
   cout<<mini<<endl;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}