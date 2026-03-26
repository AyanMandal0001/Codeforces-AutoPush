#include<bits/stdc++.h>
using namespace std;

bool myfunc(int a,int b,int c,int d){
    int cnt=0;
    for(int i=min(a,b)+1;i<max(a,b);i++){
        if(i==c) cnt++;
        else if (i==d) cnt++;
    }
    if(cnt==1) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(myfunc(a,b,c,d)==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}