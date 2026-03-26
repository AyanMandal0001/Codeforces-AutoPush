#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n,x,y;
  cin>>n>>x>>y;
  int mini = min(x,y);
  int ans = (n+mini-1)/mini;
 cout<<ans<<'\n';
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