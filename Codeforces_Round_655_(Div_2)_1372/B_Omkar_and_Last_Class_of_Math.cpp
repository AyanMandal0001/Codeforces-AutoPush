#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}
set<int>getDivisors(int n){
    set<int>st;
    for(int i=2;i<=sqrt(n);i++){
       if(n%i==0){ st.insert(i);st.insert(n/i);}
    } 
    return st;
}
void solve(){
 int n ; cin >> n;
 set<int> mySet=getDivisors(n);
  if(mySet.size()==0){ // prime
     cout<<1<<" "<<n-1<<endl;
     return;
  }
 auto it = mySet.rbegin();
  int a = *it;
  int b = n - a;
  cout << a <<" "<<b<<endl;
//  // go through all divi
//   int mini = INT_MAX;
//   if(mySet.size()==0){ //prime
//      cout << 1 <<" "<<n-1<<endl; return;
//   }
//    int A = - 1 , B = - 1;
//   for(auto it=mySet.begin();it!=mySet.end();it++){
//      int a = *it;
//      int b = n - a;
//      if(mini > lcm(a,b)){
//      mini = lcm(a,b);
//      A = a;
//      B = b;
//   }
//   }
//    cout << A<<" "<<B <<endl;
//  for(int i=1;i<=sqrt(n);i++){
//   int a = i ;
//   int b = n - i;
//   if(mini > lcm(a,b)){
//      mini = lcm(a,b);
//      A = a;
//      B = b;
//   }
//  }
}
signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tt; cin>>tt;while(tt--)
         solve();
}