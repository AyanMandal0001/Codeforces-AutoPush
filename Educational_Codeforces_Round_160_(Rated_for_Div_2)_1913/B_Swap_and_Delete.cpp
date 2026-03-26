#include <bits/stdc++.h>
using namespace std;

// *******************************************************************************//
void solve(){
  string s; cin >> s;
    int n = s.size();
    int c0 = 0,c1=0;
    for(int i=0;i<n;i++){
   if(s[i]=='0') c0++;
   else c1++;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
     if(s[i]=='0' and c1 > 0){
       ans++;
       c1--;
     }
     else if(s[i]=='1' and c0 > 0){
       ans++;
       c0--;
     }
     else{
        break;
     }
    }
    // if(c0==c1) cout<<0<<endl;
    // else if(n==1 || abs(c0-c1)==1) cout<<1<<endl;
    // else cout<<n-min(c0, c1)<<endl;
    cout << n- ans <<endl;
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