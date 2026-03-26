#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n; cin>>n;
 vector<int>v(n);
 if(n==6) {
    cout<<" 1 1 2 3 1 2"<<endl;
    return;
 }
 else if(n==7){
    cout<<" 1 1 2 3 1 2 2"<<endl;
    return;
 }
 for(int i=0;i<n/2;i++){
    v[i]=i+1;
 }
 for(int i=n/2;i<n;i++){
    v[i]=i-n/2+1;
 }
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
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
