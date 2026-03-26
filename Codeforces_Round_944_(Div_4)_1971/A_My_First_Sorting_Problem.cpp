#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        cout<<min(n1,n2)<<" "<<max(n1,n2)<<endl;
    }
    return 0;
}