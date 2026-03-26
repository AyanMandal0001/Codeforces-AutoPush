#include <bits/stdc++.h>
using namespace std;

// *******************************************************************************//
bool isSame(vector<int> &arr) {
 for(int i = 0; i < arr.size()-1; i++) {
   if (arr[i] != arr[i+1]) return false;
 }
 return true;
}
void solve(){
  int n ; cin >> n;
  vector<int> arr(n);
  int maxi = -1;
  int sum = 0;
  for(int i=0;i<n;i++){
    cin >> arr[i];
    maxi = max(maxi,arr[i]);
    sum += arr[i];
  }


 if(isSame(arr)){
    cout << "No" << endl;
 }
 else{
    cout<< "Yes" << endl;
    for(int i=0;i<n;i++){
        if(arr[i] == maxi) cout << "2" <<" ";
        else{ cout << "1" <<" ";
        }
    }
    cout<< endl;
 }


}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}