#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1 = "abc";
        string s;
        cin>>s;
        if(s==s1) cout<<"YES"<<endl;
        else if(s[0]=='a'||s[1]=='b'||s[2]=='c') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}