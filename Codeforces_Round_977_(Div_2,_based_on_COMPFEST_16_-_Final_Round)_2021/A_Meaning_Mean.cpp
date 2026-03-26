#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n; cin>>n;
  vector<int>a(n);
  for (int i = 0; i < n; i++){
   cin>>a[i];
  }
  sort(a.begin(),a.end());
  while(a.size()>=2){   
      int avg=floor((a[0]+a[1])/2);
      a.erase(a.begin());
      a.erase(a.begin());
      a.insert(a.begin(),avg);
 }
cout<<a[0]<<endl;
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