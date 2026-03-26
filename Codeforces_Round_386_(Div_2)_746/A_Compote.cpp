#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  int totalNoOfFruit=0;
  while(a>= 1 && b>=2 && c>= 4){
       if(2*a <= b && 4*a<=c){
              totalNoOfFruit += 7*a;
              break; 
       }
       else{
        a--;
       }
  }
   if(totalNoOfFruit!=0) cout<<totalNoOfFruit<<endl;
  else if(totalNoOfFruit==0) cout<<"0"<<endl;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}