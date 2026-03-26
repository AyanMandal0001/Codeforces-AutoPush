#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
// *******************************************************************************//
void solve(){
    int n , m ; cin >> n >> m;
    int arr[n][m];
    int mini = 1e9,sum = 0, cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
            sum += abs(arr[i][j]);
            if(arr[i][j] < 0){
                cnt++;
            }
           if(mini > abs(arr[i][j])){
                mini = abs(arr[i][j]);
            }
        }
    }
    if( cnt % 2 == 0){
       cout<<sum<<endl;
       return;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin >> arr[i][j];
    //         if(arr[i][j] < 0){
    //             cnt++;
    //         }
    //        if(mini > abs(arr[i][j])){
    //             mini = abs(arr[i][j]);
    //             i = i;
    //             j = j;
    //         }
    //     }
    // }
    cout << sum-2*mini<<endl;

}
signed main(){
    int tt; cin>>tt;while(tt--)
         solve();
}