#include <bits/stdc++.h>
using namespace std;

void solve(){
  double l,p,q;
  cin>>l>>p>>q;
  cout<< l * p/(p+q)<<endl;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}