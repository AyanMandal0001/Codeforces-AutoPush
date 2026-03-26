#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
     int  n ; cin >> n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){ 
        cin >> arr[i];
     }

      // n & 1 calculates if n is even of odd   if n & 1 == 1  means odd n & 1 == 0 means even
       
      if(n & 1){ // n is odd
        // key logic
        // after choosing a even no. of element subarray after 1st XOR lets say the result is x then  subarray becomes x x x x so after 2nd operation it becomes x ^ x ^ x ^ x == 0 
        cout << 4 <<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
      }
      else{ // n is even
          cout << 2 <<endl;
          cout <<1<<" "<<n<<endl;
          cout <<1<<" "<<n<<endl;
      }
}
signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}