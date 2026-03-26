#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; string s;
        cin>>n>>s;
      if(s.length()>=2) {
          if(s[0]!=s[n-1]){
            cout<<"YES"<<endl;
            }
          else cout<<"NO"<<endl;
        }
      
    }
    return 0;
}