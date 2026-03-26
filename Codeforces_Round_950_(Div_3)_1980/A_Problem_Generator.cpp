#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int cnt=0;
        int cntA=0;
        int cntB=0;
        int cntC=0;
        int cntD=0;
        int cntE=0;
        int cntF=0;
        int cntG=0;
      for (int i = 0; i < n; i++)
      {
        if(s[i]=='A') cntA++;
        if(s[i]=='B') cntB++;
        if(s[i]=='C') cntC++;
        if(s[i]=='D') cntD++;
        if(s[i]=='E') cntE++;
        if(s[i]=='F') cntF++;
        if(s[i]=='G') cntG++;
        
      }       
    if(cntA<m) cnt+=(m-cntA);
    if(cntB<m) cnt+=(m-cntB);
   if(cntC<m) cnt+=(m-cntC);
   if(cntD<m) cnt+=(m-cntD);
    if(cntE<m) cnt+=(m-cntE);
   if(cntF<m) cnt+=(m-cntF);
    if(cntG<m) cnt+=(m-cntG);
    
   cout<<cnt<<endl;
    }
    return 0;
}