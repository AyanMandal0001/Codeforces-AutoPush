#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
 #define pb push_back
 #define pback pop_back
 #define all(w) w.begin(),w.end()
#define sp ' '
 ll r1,r2,c1,c2,d1,d2;
bool con(int a,int b,int c,int d){
  if(a+b==r1&&c+d==r2&&a+d==d1&&a+c==c1&&b+d==c2&&b+c==d2) return true;
  return false;
}
void solve(){
 cin >>r1>>r2>>c1>>c2>>d1>>d2;
  for(int a=1;a<10;a++){
    for(int b=1;b<10;b++){
        for(int c=1;c<10;c++){
            for(int d=1;d<10;d++){
                if(a==b||b==c||c==d||d==a||b==d||c==a) continue;
                if(con(a,b,c,d)) {
                   cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
                   return;
                }
            }
        }
    }
  }
  cout<<-1<<endl;
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   // ll tt; cin>>tt;while(tt--)
         solve();
}