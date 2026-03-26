#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , r , b; cin >> n >> r >> b;
    int rep =  (r)/(b+1);
    int rem = (r)%(b+1);
    int cnt = 0;
    string s ="";
     string s1 ="B"; 
      string s2="";
       string s3="";
    for(int i=1;i<=rep;i++){
        s2 += "R";
    }
    if(r  % (b+1) !=0)  s3 = s2+ "R";
     while(s.size() < n){
        if(cnt < rem){
            s +=s3;
            s +=s1;
        }
        else{
            s +=s2;
            s +=s1;
        }
        cnt++;       
     }
    cout<< s.substr(0,n) << endl;
}

int main(){
    int tt; cin >> tt; while(tt--)
        solve();
    return 0;
}