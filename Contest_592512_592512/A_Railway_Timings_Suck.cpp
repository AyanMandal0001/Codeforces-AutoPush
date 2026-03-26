#include <bits/stdc++.h>
using namespace std;
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) (x * y) / gcd(x, y)
int cnt_div(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n / i)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int cnt_noOfDigits(int num)
{
    return log10(num) + 1;
}
void swap(int &a, int &b)
{
    // a = a + b -(b=a);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
#include <iostream>
#include <iomanip>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(3, 2));

    bool isPM = false;

    if (a >= 12)
    {
        isPM = true;
        if (a > 12)
        {
            a -= 12;
        }
    }
    else if (a == 0)
    {
        a = 12;
    }

    cout << (a < 10 ? "0" : "") << a << ":" << (b < 10 ? "0" : "") << b << " " << (isPM ? "PM" : "AM") << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
