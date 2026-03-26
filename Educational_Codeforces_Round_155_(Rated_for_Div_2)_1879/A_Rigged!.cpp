#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int sth, end;
  cin >> sth >> end;
  n--;
  int e_max = -1;
  while (n--){
    int s, e;
    cin >> s >> e;
    if (s >= sth){
      e_max = max(e_max, e);
    }
  }
  if(end > e_max){
    cout << sth << endl;
  }
  else{
    cout << -1<< endl;
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}
