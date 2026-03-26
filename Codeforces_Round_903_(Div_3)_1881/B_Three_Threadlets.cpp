#include <bits/stdc++.h>
using namespace std;

bool solve(long long a,long long b,long long c){

   long long sum = a+b+c;
    int mini = min(min(a,b),c);

    if(a==b&&b==c) return true;
    else{
          for(int i=4;i<=6;i++){
            if(sum%i==0 && mini>=sum/i &&
            a % mini== 0 && b%mini==0 &&
          c%mini==0) return true;
          }
    }
       return false;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {    long long a,b,c; cin>>a>>b>>c;
       if( solve(a,b,c)==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}