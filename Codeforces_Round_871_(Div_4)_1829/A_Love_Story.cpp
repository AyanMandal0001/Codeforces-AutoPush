#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1="codeforces";
        string s;
        cin>>s;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i]) cnt++;
        }
       cout<<cnt<<endl;
    }   
}