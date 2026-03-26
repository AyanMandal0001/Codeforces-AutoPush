#include <bits/stdc++.h>
using namespace std;
int solve(){
   int n ; cin>>n; int w,h;
    int w_maxi=INT_MIN;
    int h_maxi=INT_MIN;
   for (int i = 0; i < n; i++) {
    cin>>w>>h;
     w_maxi=max(w,w_maxi);
     h_maxi=max(h,h_maxi);
   }
   int ans = 0;
   ans = 2 * (w_maxi+h_maxi);
   return ans;
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       cout<< solve()<<endl;
    }
}