#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
bool check(int a,int b,int c){
   if( (a+b+c) % 3 ==0  and  (a+b+c)/3 >= max(a,b)  )  return true;
   return false;
}
void solve(){
  int a,b,c ; cin >> a >> b >> c;
  if(check(a,b,c)) {
     cout <<"YES"<< endl;   
  }
  else{
    cout << "NO"<<endl;
  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}