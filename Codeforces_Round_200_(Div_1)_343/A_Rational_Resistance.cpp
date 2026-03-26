#include <bits/stdc++.h>
using namespace std;
#define int long long

int countResistors(int a, int b)
{
  int count = 0;
  while (a != 1 || b != 1)
  {
    if (a > b)
    {
      count += a / b;
      a %= b;
      if (a == 0)
      { // reached 1/1
        count--;
        a = b;
      }
    }
    else
    {
      count += b / a;
      b %= a;
      if (b == 0)
      { //reached 1/1
        count--;
        b = a;
      }
    }
  }
  return count;
}
void solve()
{
  int a, b;
  cin >> a >> b;
  cout << 1+countResistors(a, b) << endl;
}

signed main()
{
  //   int tt; cin >> tt; while(tt--)
  solve();
  return 0;
}