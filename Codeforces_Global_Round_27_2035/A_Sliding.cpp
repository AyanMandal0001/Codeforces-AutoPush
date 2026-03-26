#include <bits/stdc++.h>
using namespace std;
void solve(){
  long long n,m,r,c;
  cin>>n>>m>>r>>c; long long dist = 0;
  dist += (n-r)* m + m-c +(((n-r)* m + m-c)/m)*(m-1);
  cout<<dist<<endl;
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