#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;

void solve(){
  int n , k ; cin >> n >> k;
  string s; cin >> s;
  int b = 0 , w = 0;
  for(int i=0;i<k;i++){
   if(s[i]=='W') w++;
   else b++;
  }
  int mini = w;
  for(int i=k;i<n;i++){
    if(s[i]=='W'){
       w++;
       if(s[i-k]=='W') w--;
       else b--;
    }
    else{
      b++;
       if(s[i-k]=='W') w--;
       else b--;
    }
    mini = min(mini,w);
  }
  cout << mini << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tt; cin>>tt;while(tt--)
         solve();
}