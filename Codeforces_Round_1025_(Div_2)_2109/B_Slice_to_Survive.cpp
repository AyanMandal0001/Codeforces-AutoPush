#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m)

{

    if (n == 1 && m == 1)

        return 0;

    if (n < m)

        swap(n, m);

    int a = (n + 1) / 2;

    int b = (m + 1) / 2;

    return 1 + solve(min(a, n - a + 1), m);
}

int main()
{

    ios::sync_with_stdio(0);

    cin.tie(NULL);

    int t;

    cin >> t;

    while (t--)

    {

        int n, m, a, b;

        cin >> n >> m >> a >> b;

        int res = solve(a, m);

        res = min(res, solve(n, b));

        res = min(res, solve(n - a + 1, m));

        res = min(res, solve(n, m - b + 1));

        cout << 1 + res << "\n";
    }

    return 0;
}