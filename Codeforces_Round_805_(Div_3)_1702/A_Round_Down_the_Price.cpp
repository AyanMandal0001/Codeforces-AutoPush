#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int power(int a,int b){
  if(b==0) return 1;
  if(b%2) {return a*power(a,b-1);}
  else { int temp = power(a,b/2);
  return temp * temp;
  }
  return -1;
}
void solve(){
  int m ; cin >> m;
  int a = log10(m);
  int b = power(10,a);
  //cout << a <<" "<<b<<endl;
  cout << m - b << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt=1; 
    cin>>tt;
    while(tt--) solve(); 
}