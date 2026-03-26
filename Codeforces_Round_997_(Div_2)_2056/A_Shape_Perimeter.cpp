#include <bits/stdc++.h>
using namespace std;
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x * y)/ gcd(x,y)

int cnt_div(int n){
  int cnt = 0;
  for(int i = 1; i <= sqrt(n); i++){
    if(n % i == 0){
      cnt++;
      if(i != n / i){
        cnt++;
      }
    }
  }
  return cnt;
}

void solve(){
  int n, m; cin >> n >> m;
  vector<int> x(n), y(n);
  int minus = 0;
  
  for(int i = 0; i < n; i++){
    cin >> x[i] >> y[i];
   if(i==0) continue;
   else if(x[i]<m&&y[i]==m) minus += 2*m;
   else if(y[i]<m&&x[i]==m) minus += 2*m;
   else if( x[i]>m && y[i]<m) minus +=0;
   else if( y[i]>m && x[i]<m) minus +=0;
   else if(x[i]<m && y[i]<m) minus += 2*(2*m-x[i]-y[i]);
   else minus += 0;
  }
  cout << n * m * 4 - minus << endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  int t; cin >> t;
  while(t--){
    solve();
  }

  return 0;
}
