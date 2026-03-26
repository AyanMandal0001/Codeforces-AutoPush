#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> arr(4); int temp;
        for(int i=0;i<4;i++){
            cin>>arr[i];
            if(i==0) temp=arr[i];
        }
        sort(arr.begin(),arr.end());
       for(int i =0;i<4;i++){
        if(arr[i]==temp) 
        cout<<3-i<<endl;
       }
    }
}