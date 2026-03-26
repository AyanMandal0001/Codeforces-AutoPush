#include <bits/stdc++.h>
using namespace std;
void solve(){
 int n; cin >> n;
 vector<int>a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  cout<<abs(a[n-1]-a[0])+abs(a[n-2]-a[1])+abs(a[n-2]-a[0])+abs(a[n-1]-a[1])<<endl;
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