#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool func2(vector<int> &arr)
{
    int sum = accumulate(arr.begin(), arr.end(), 0LL);
    return sum == 0;
}

int func1(vector<int> &arr)
{
    int n = arr.size();
    int maxi = -1,mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i], maxi);
        mini = min(arr[i], mini);
    }
    return maxi - mini;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int turns = 0;
    bool flag = false;
// first do one iteration
   int maxi = -1;
    for(int i=0;i < n;i++){
         maxi = max(arr[i],maxi);
    }
    sort(arr.begin(), arr.end());
    arr[n-1] -= 1;
    turns ++;
    if(func1(arr) > k){
        cout<<"Jerry" << endl;
        return;
    }
    int sum = 0;
   for(int i=0;i<n;i++){
        sum += arr[i];
   }
        if (sum % 2 == 0)
            cout << "Tom" << endl;
        else
            cout << "Jerry" << endl;   
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}