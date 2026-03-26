#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
        string s1="codeforces";
        string s;
        cin>>s;            
        if(s1.find(s)>=0 && s1.find(s)<=9) cout<<"YES"<<endl;       
        if(s1.find(s)<0 || s1.find(s)>9)   cout<<"NO"<<endl;       
     }
}