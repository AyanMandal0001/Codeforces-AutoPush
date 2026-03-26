#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
 int n ; 
 int pos[100100];
 int vel[100100];
 int minpos = 1e9, maxpos = -1e9, minvel = 1e9, maxvel = -1e9;

bool check(double t) {
    double L = -1e18, R = 1e18;
    for (int i = 0; i < n; i++) {
        L = max(L, pos[i] - vel[i] * t);
        R = min(R, pos[i] + vel[i] * t);
    }
    if(L <= R) return 1; // intersection exists
    return 0;
}
void solve(){
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> pos[i];
    minpos = min(minpos,pos[i]);
    maxpos = max(maxpos,pos[i]);
  }
  for(int i=0;i<n;i++){
    cin >> vel[i];
    minvel = min(minvel,vel[i]);
    maxvel = max(maxvel,vel[i]);
  }
  // bs on time
  double l = 0;
  double h = 1e9;
  double ans = 0;
  for (int iter = 0; iter < 100; iter++){
    double m = (l+h)/2;
    if(check(m)){
     ans = m;
     h = m ;
    }
    else{
    l = m ;
    }
  }
  cout << fixed << setprecision(12) << ans << nl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  //  int tt; cin>>tt;while(tt--)
         solve();
}
