#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
void solve(){
    int n ; cin >> n;
    int b[n];
    set<int>st;
    for(int i=0;i<n;i++){
        cin>>b[i];
        st.insert(b[i]);
    }
    if(st.size()!=n) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    
}
signed main(){ 
    int tt; cin>>tt;while(tt--)
         solve();
}