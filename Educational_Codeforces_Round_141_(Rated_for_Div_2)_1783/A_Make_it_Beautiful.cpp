#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>//for using int min and int max

using namespace std;



void solve(){
  int n;
  cin >> n;
  vector<int> arr(n);
  int mini = INT_MAX;
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
   mini = min(mini,arr[i]);
   maxi = max(maxi,arr[i]);
  }
  if(maxi==mini) {
    cout<<"NO"<<endl;
  }
  else{
    cout<<"Yes"<<endl;
   // Logic - max min then rest all element
  sort(arr.begin(),arr.end());
  reverse(arr.begin(),arr.end());
  swap(arr[1],arr[n-1]);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
