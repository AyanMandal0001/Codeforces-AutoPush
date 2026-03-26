#include<bits/stdc++.h>
using namespace std;

int countPairs(const vector<int>&arr1,const vector<int>&arr2,int k){
    int cnt=0;
    for(auto a:arr1){
        for(auto b:arr2){
            if(a+b<=k)
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>arr1(n);
        vector<int>arr2(m);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
    cout<<countPairs(arr1,arr2,k)<<endl;
    }
    return 0;
}