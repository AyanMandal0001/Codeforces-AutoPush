#include<bits/stdc++.h>
using namespace std;

int main(){
       int t;
       cin>>t;
       while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(2 * a== b){ cout<< n * a<<endl;}
        else if (2*a>b && n%2==0){ cout<<(n/2)*b<<endl;}
        else if(2*a>b && n%2!=0)  {cout<<a+((n-1)/2)*b<<endl;}
        else { cout<<n*a<<endl;}
       }
    return 0;
}