#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve(){
 int n , k ;string s; cin >> n >> k >> s;
  int flag = 0;
  int cnt = 0 , ind = -1;
  for(int i=0;i<n;i++){
    if(flag==0 && s[i]=='1'){
        ind = i;
        cnt++;
        flag = 1;
    }
    else if(flag==1 && s[i]=='1' && i-ind>k-1){
        ind  = i;
        cnt++;
    }
    else if(flag==1 && s[i]=='1'){
        ind=i;
    }
  }
  cout << cnt << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}