#include <bits/stdc++.h>
using namespace std;
bool triangle(int a, int b, int c)
{
    if (a + b > c && b + c > a && c + a > b)
        return true;
    return false;
}
bool segment(int a, int b, int c)
{
    int maxi = max({a, b, c});
    if ((2 * maxi) == (a + b + c))     return true;
    return false;
}
int solve(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = i + 1; j < arr.size(); ++j)
        {
            for (int k = j + 1; k < arr.size(); ++k)
            {
                if (triangle(arr[i], arr[j], arr[k]))  return 1;
               else   continue;
            }
        }
    }

    for (int i = 0; i < arr.size(); ++i)
    {
        for (int j = i + 1; j < arr.size(); ++j)
        {
            for (int k = j + 1; k < arr.size(); ++k)
            {
                if (segment(arr[i], arr[j], arr[k]))  return 2;
               else   continue;
            }
        }
    }
    return 0;
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin>>t;
    for (int i = 0; i < t; i++)
    {
        vector<int> a(4);
        for (int i = 0; i < 4; i++)
            cin >> a[i];
        if (solve(a) == 1)
            cout << "TRIANGLE" << endl;
        else if (solve(a) == 2)
            cout << "SEGMENT" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }
}