#include <iostream>
using namespace std;

int f(int x){
    int ans = 0;
    if(x%15==0 ) ans += x/15 ;
   else if(x%15!=0 && x>15) ans += x/15 +1;
        else ans += 1;
        return ans;
}
void solve() {
    int x, y; 
    cin >> x >> y;
    int screen =( y+1)/2;
    int space_occu = y*4;
    int space_remaining = 15 * screen - space_occu;
    if(space_remaining>=x) {screen += 0;x=0;}
    else x -= space_remaining;
   cout<<screen+f(x)<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
