#include <bits/stdc++.h>
using namespace std;

void solve(){
   char mat[10][10];
     int points=0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin>>mat[i][j];
            if (mat[i][j] == 'X') {
                int layer = min({i, j, 9 - i, 9 - j});
                points += layer + 1;
            }
        }
    }
   cout<<points<<endl;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}