#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int solve(){
  int a,b,c; cin>>a>>b>>c;
  if(b % 3 ==0){
    return a+b/3+(c+2)/3 ;
  }
  else{ // means b %3 ==1 or b%3 ==3
     if(b %3 == 1){
        return (c > 1 ? a+b/3+1+c/3 : -1);
     }
     else{ // means b %3 ==2
         return (c > 0 ? a+b/3+1+(c+1)/3 : -1);
     }
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cout<<solve()<<endl;
    }
}