#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n ; cin >> n;
  int cnt = 0;
  for(int i=0;i<n;i++){
    int a,b,c;cin >> a>> b>>c;
    if(a+b+c>=2) cnt++;
  }
  cout << cnt << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt=1; 
    //  cin>>tt; while(tt--) 
    solve(); 
}