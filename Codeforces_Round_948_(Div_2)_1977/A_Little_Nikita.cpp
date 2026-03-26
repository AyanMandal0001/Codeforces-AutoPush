#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // int cnt=0;
        // for (int i = 0; i < n; i++)
        // {
        //     if(i==0) cnt++;
        //     else cnt++|| cnt--;
        // }
        if(n==m) cout<<"YES"<<endl;
        else if(n<m) cout<<"NO"<<endl;
         else if(n>m){
            if((n-m)%2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
         } 
    }
    return 0;
}