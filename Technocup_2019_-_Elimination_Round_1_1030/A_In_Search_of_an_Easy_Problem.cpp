#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
 int n ;cin >> n;
 int s  = 0;
 for(int i=0;i<n;i++){
    int x; cin >> x; s += x;
 }
 if(s>0) cout<<"HARD"<<endl;
 else cout<<"EASY"<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // int tt; cin>>tt;while(tt--)
         solve();
}