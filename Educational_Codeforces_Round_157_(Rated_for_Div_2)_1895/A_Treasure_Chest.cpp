#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x,y,k;
  cin>>x>>y>>k;
  if(x>y) cout<<x<<endl;
 else if(x<y && y-x<=k) cout<<y<<endl;
 else if(x<y && y-x>k) cout<<x+k+2*(y-(x+k))<<endl;
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