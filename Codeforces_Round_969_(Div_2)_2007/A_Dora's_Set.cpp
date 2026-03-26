#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        int l, r;
        cin >> l >> r;
       if(l%2) l--;// imp line
   int ans=(r-l+1)/4;//imp line
   cout<<ans<<'\n';
    }
    return 0;
}