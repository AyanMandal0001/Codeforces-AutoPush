#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

// *******************************************************************************//
bool check( int mat[9][9]){
   // row 
    for(int i=0;i<9;i++){
        int freq[10]={0};
      for(int j=0;j<9;j++){
        if(freq[mat[i][j]] != 0) return false;
        else freq[mat[i][j]]++;
    }
   }
  // col
      for(int i=0;i<9;i++){
        int freq[10]={0};
      for(int j=0;j<9;j++){
        if(freq[mat[j][i]] != 0) return false;
        else freq[mat[j][i]]++;
    }
   }
  // 3 x 3
    for(int i=0;i<9;i+=3){
      for(int j=0;j<9;j+=3){
          int freq[10]={0};
          for(int di = 0;di<3;di++){
            for(int dj=0;dj<3;dj++){
                if(freq[mat[i+di][j+dj]] !=0) return false;
                else  freq[mat[i+di][j+dj]]++;
            }
          }
    }
   }
   return true;
}
void solve(){
   int mat[9][9];
   for(int i=0;i<9;i++){
      for(int j=0;j<9;j++){
      cin  >> mat[i][j];
    }
   }
     if(check(mat)) cout <<"VALID";
     else cout<<"INVALID";
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  //  int tt; cin>>tt;while(tt--)
         solve();
}