#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// *******************************************************************************//
void solve(){
 int n ; cin >> n;
 vector<vector<int>> arr(n,vector<int>(n));
 int sum = 0;
 for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> arr[i][j];
        if(i==0 || j==n-1) sum += arr[i][j];
    }
 }
 cout << (2*n)*(2*n+1)/2 -sum <<" ";
  for(int i=0;i<n;i++) cout<<arr[0][i]<<" ";
  for(int i=1;i<n;i++) cout<<arr[i][n-1]<<" ";
  cout<<endl;
}
int main(){

    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}