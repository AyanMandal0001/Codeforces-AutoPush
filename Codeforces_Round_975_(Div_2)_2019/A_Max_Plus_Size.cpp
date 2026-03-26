#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int maxi1 = INT_MIN;
    int maxi2 = INT_MIN;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
           maxi1=max(maxi1,a[i]);
            cnt1++;
        }
        if (i % 2 == 1)
        {
        maxi2=max(maxi2,a[i]);
            cnt2++;
        }
    }
    cout << max(maxi1 + cnt1, maxi2 + cnt2) << endl;
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