#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s, t;
    cin >> s >> t;
    int maxi = max(s.length(), t.length());
    if (s[0] != t[0])
    {
        cout << s.length() + t.length() << endl;
    }
    else if (s[0] == t[0])
    {
        int cnt = 0;
        for (int i = 0; i < maxi; i++)
        {
            if (s[i] == t[i])
            {
                cnt++;
                continue;
            }
            else
            {
                break;
            }
        }
        cnt += s.length() - cnt + t.length() - cnt + 1;
        cout << cnt << endl;
    }
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}