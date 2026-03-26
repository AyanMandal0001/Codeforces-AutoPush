#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ; cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   vector<int>ans(n,0); // 0 based indexing

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sep = abs (arr[i]-arr[j]);
            for(int k=1; k*k<=sep;k++) {
                // 6 -> 1 2 3 6  increase cnt of index 0 1 2 5
                if(sep % k == 0) {       
                        ans[k - 1]++;               
                    if(k != sep/k && sep/k <= n) {
                        ans[sep/k - 1]++;
                    }
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<< ans[i] <<" ";
    }
    cout << endl;
}

int main(){
    solve();
    return 0;
}