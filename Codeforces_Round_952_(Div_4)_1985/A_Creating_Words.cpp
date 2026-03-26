#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
    if(s1.length()==s2.length()){
        swap(s1[0],s2[0]);
        cout<<s1<<" "<<s2<<endl;
    }
    }
    return 0;
}