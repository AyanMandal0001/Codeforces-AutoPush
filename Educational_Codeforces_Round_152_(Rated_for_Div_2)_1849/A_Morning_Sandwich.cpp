#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int b,c,h,gaps;
        cin>>b>>c>>h;
       gaps = b-1;
      if(gaps==c+h) cout<<b+c+h<<endl;
      else if(gaps>(c+h)) cout<<2 * (c+h) + 1<<endl;
       else   cout<<2*b-1<<endl;
    }
    return 0;
}