#include <bits/stdc++.h>
using namespace std;
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x * y)/ gcd(x,y)
int cnt_div(int n){
  int cnt = 0;
for(int i=1;i<=sqrt(n);i++){
    if(n % i == 0){
  cnt ++;
if(i != n/i){
  cnt++;
 }
 }
 }
return cnt;
 }
void solve() {
  int x, y, k;
  cin >> x >> y >> k;
  if (k <= min(x, y)) {
    cout << 0 << " " << 0 << " " << x << " " << 0 << endl
         << x << " " << 0 << " " << x << " " << y << endl;
  } else {
    if (min(x, y) == x) {
      cout << 0 << " " << 0 << " " << x << " " << x << endl
           << x << " " << 0 << " " << 0 << " " << x << endl;
    } else if (min(x, y) == y) {
      cout << 0 << " " << 0 << " " << y << " " << y << endl
           << y << " " << 0 << " " << 0 << " " << y << endl;
    }
  }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}