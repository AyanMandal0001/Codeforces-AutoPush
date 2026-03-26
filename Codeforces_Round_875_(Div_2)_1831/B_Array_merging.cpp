#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// *******************************************************************************//
void solve(){
   int n ; cin >> n;
   int faa[2*n+1]={0};
   int fbb[2*n+1]={0};
  int cnt = 0,prev = -1;
  for(int i=0;i<n;i++){
  int x; cin >> x;
    if(i==0) {faa[x]++;cnt++;}
    else{
        if(x==prev)cnt++;
        else cnt = 1;
    }
    faa[x] = max(faa[x],cnt);
    prev = x;
  }
   cnt = 0,prev=-1;
    for(int i=0;i<n;i++){
   int x; cin >> x;
    if(i==0) {fbb[x]++;cnt++;}
    else{
        if(x==prev) cnt++;
        else cnt = 1;
    }
    fbb[x] = max(fbb[x],cnt);
    prev = x;
  }
  int maxi = -1;
//   for(int i=1;i<=2*n;i++){
//   cout <<faa[i]<<" ";
//   }cout << endl;
// for(int i=1;i<=2*n;i++){
//   cout <<fbb[i]<<" ";
//   }cout << endl;
  for(int i=1;i<=2*n;i++){
    maxi = max(maxi,faa[i]+fbb[i]);
  }
  cout << maxi <<endl;
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