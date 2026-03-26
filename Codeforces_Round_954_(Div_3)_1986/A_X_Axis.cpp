#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(3);
        for(int i=0;i<arr.size();i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        cout<<arr[2]-arr[0]<<endl;
    }
}