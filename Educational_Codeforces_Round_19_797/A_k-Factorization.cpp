// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define int long long
// int mod = 1e9+7;

// // *******************************************************************************//
// void solve(){
//    int n , k ; cin >> n >> k;
//    if(k==1){
//     cout << n <<endl;
//     return ;
//    }
//     vector<int>arr;
//     for(int i=2;i<n;i++){
//       while(n%i==0 and arr.size() < k-1){
//         arr.push_back(i);
//         n /= i;
//       }
//     }
//  if(n > 1) {  
//      arr.push_back(n);
//         if(arr.size()==k){
//             for(auto it:arr){
//             cout << it << " ";
//         }
//         cout << endl;
//         }
//         else{
//             cout<<-1 << endl;
//         }
//    }
//     else {
//         cout <<-1<<endl;
//     }
// }
// signed main(){

//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

//   //  int tt; cin>>tt;while(tt--)
//          solve();
// }
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int mod = 1e9+7;

 vector<pair<int,int>> Factors(int x) {
vector<pair<int,int>> ans;
  for(int i = 2; i * i <= x; i++) {
 if(x % i == 0) {
int cnt = 0;
  while(x % i == 0) {
cnt++;
x /= i;
 }
 ans.push_back({i, cnt});
 }
}
 if(x > 1) ans.push_back({x, 1});
 return ans;
 }

// *******************************************************************************//
void solve(){
   int  n , k ; cin >> n >> k;
   vector<pair<int,int>> vec = Factors(n);
   int ans = 0;
   for(int i=0;i<vec.size();i++){
      ans += vec[i].second;
   }
   if( ans >= k){
            vector<int>arr;
            for(int i=2;i<n;i++){
            while(n%i==0 and arr.size() < k-1){
                arr.push_back(i);
                n /= i;
                if(arr.size()==k-1) goto end;
             }
            }
            end:
            arr.push_back(n);

        for(auto it:arr){
            cout << it<<" ";
        }
        cout << endl;
   }
   else{
    cout << -1 << endl;
   }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 //   int tt; cin>>tt;while(tt--)
         solve();
}