#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int>&arr){
    int maxi=INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>maxi){
            maxi=max(arr[i],maxi);
        }
    }
  return maxi;  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0;i<n;i++){cin>>arr[i];}
    int maxi=maxElement(arr);
    while(m--){
        char c;
        int l,r;
        cin>>c>>l>>r;
        if(c=='+'&& maxi>=l&& maxi<=r){
            maxi++;
        }
        else if(c=='-'&& maxi>=l&& maxi<=r){
            maxi--;
        }
        cout<<maxi<<" ";
    }
   cout<<endl;
  }
    return 0;
}