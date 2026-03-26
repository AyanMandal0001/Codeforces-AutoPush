#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt ; cin >> tt;
    while(tt--){
        int n ; cin >> n;
        int maxi = -1,mini = 1e9+7 ;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            maxi = max(maxi,arr[i]);
            mini = min(mini,arr[i]);
        }
        cout << maxi-mini  << endl;
    }

    return 0;
}