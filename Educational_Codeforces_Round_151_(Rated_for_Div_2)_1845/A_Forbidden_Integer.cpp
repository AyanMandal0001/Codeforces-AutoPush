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

bool isPossible(int n, int k, int x)
{
    if ((x == 1 && k == 1) || (x == 1 && k == 2 && n % 2 == 1))
        return false;
    return true;
}
void solve(int n, int k, int x, vector<int> &a)
{
    if (x == 1)
    {
       if(n%2==0){
        for (int i = 0; i < n / 2; i++)    {
            a.push_back(2);
        }
      }
      else{ // n % 2 == 1
        n -= 3;a.push_back(3);
        if( n > 0){
            for (int i = 0; i < n / 2; i++) {
                a.push_back(2);
            }
        }
      }
 }       
    else if (x == 2)
    {
            for (int i = 0; i < n; i++)  {
                a.push_back(1);
            }      
          }
    else
    {
        for (int i = 0; i < n; i++)
        {
            a.push_back(1);
        }
    }
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a;
        if (isPossible(n, k, x))
        {
            cout << "YES" << endl;
            solve(n, k, x, a);
        }
        else
            cout << "NO" << endl;
    }
}