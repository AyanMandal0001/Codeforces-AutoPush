#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0 && a[i] == 0)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else if (i > 0 && a[i - 1] + a[i] == 0)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else if (a[i] == 0)
        {
            cnt++;
            ans = max(ans, cnt);
        }
        else if (a[i] != 0)
        {
            cnt = 0;
        }
        else
        {
            continue;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
