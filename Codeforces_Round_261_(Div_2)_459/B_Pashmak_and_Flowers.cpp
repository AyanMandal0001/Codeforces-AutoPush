#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n ; cin >> n;
    int arr[n];
    int maxi = -1,mini = 1e9+7;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        maxi = max(maxi,arr[i]);
        mini = min(mini,arr[i]);
    }
    int cmax = 0,cmin = 0;
    for(int i=0;i<n;i++){
     if(arr[i]==maxi) cmax++;
     if(arr[i]==mini) cmin++;
    }
    if(maxi==mini) cout<<0<<" "<<n*(n-1)/2;
   else cout << maxi - mini <<" "<<cmax*cmin;
    return 0;
}