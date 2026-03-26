#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// *******************************************************************************//
bool adj(int r1, int c1, int r2, int c2) {
    return abs(r1 - r2) <= 1 and abs(c1 - c2) <= 1 and not(r1 == r2 and c1 == c2);
}
void solve(){
   vector<vector<char>>mat(3,vector<char>(3));
   int cntA = 0,cntB=0,cntC=0;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin >> mat[i][j];
    }
   }
 string ans0 ="CCC";
  for(int r1=0;r1<3;r1++){
    for(int c1=0;c1<3;c1++){
          for(int r2=0;r2<3;r2++){
             for(int c2=0;c2<3;c2++){
                  for(int r3=0;r3<3;r3++){
                    for(int c3=0;c3<3;c3++){
                if((r1==r2 and c1==c2)||(r1==r3 and c1==c3)||(r2==r3 and c2==c3)) continue;     
        if (adj(r1, c1, r2, c2) == true and adj(r2, c2, r3, c3)== true){
             string ans = "";
                  ans += mat[r1][c1];
                 ans += mat[r2][c2];
                 ans += mat[r3][c3];
            ans0 = min(ans,ans0);
        }
        else continue;
        }
       }
      }
     }
    }
  }
  cout<<ans0<<endl;
}
signed main(){
   // int tt; cin>>tt;while(tt--)
         solve();
}