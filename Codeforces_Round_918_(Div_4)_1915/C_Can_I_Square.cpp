#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n;cin>>n;
  long long int sum= 0;
   vector<int>a(n);
 for (int i = 0; i < n; i++){
    cin>>a[i];
    sum += a[i];
 }
long long int root=sqrt(sum);
 if(root * root==sum) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 
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