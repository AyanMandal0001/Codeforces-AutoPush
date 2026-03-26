#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// ou are given a list of n  integers. You can perform the following operation: you choose an element x  from the list, erase x from the list, and subtract the value of x from all the remaining elements. Thus, in one operation, the length of the list is decreased by exactly 1 Given an integer k (k>0 ), find if there is some sequence of n−1 operations such that, after applying the operations, the only remaining element of the list is equal to k

void solve(){
 int n , k ; cin >> n >> k;
//  int s = 0 ;
 int arr[n];
//  int maxi = -1,mini = 1e9;
 map<int,int>mp;
 for(int i=0;i<n;i++){
    cin >> arr[i];
    //  s += arr[i];
    // maxi = max(maxi,arr[i]);
    // mini = min(mini,arr[i]);
    mp[arr[i]]++;
 }
 // maxi -> k
 // cout<<"printer:" << maxi <<" "<<mini <<endl;
 for(int i=0;i<n;i++){
    int t1 = arr[i]-k;
    // int t2 = arr[i]+k;
    // if(mp[t1]>0 ||mp[t2]>0){
    //     cout << "YES"<<endl;
    //     return;
    // }
    if(mp[t1]>0){
        cout << "YES"<<endl;
        return;
    }
 }
 cout <<"NO"<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}