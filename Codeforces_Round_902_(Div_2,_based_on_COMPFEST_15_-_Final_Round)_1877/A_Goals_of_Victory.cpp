#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ; cin >> n;
    vector<int> a(n-1);
    int efficiency = 0;
    for (int i = 0; i < n-1; i++)
    {
       cin >> a[i];
       efficiency += a[i];
    }
    cout<<efficiency * -1 <<endl;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}