#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << -1 << endl;
    }
    else if ( m % n == 0)
    {
        long long p = m / n;
        long long cnt = 0;
       while (p % 2 == 0)// donot use if else loop bcz 
        {                // it checks only for once
            p = p / 2;
            cnt++;
        }
       while (p % 3 == 0)
        {
            p = p / 3;
            cnt++;
        }
        if( p != 1) { cout<<-1<<endl;}
       else {cout << cnt << endl;}
    }
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}