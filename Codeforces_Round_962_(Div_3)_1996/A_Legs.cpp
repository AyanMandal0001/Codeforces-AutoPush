#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4==0) cout<<n/4<<endl;
        else if(n%2==0 && n%4!=0) cout<<(n-2)/4+1<<endl;
    }
}