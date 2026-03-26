#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int cnt1=0; long long sum=0;
        for (int i = 0; i < n; i++)
        {   cin>>a[i];
        if(a[i]==1) cnt1++;
            sum += a[i];
        }
        if(sum<2*pow(10,5) && cnt1>sum-n) cout<<"NO"<<endl;
         else if(n==1) cout<<"NO"<<endl;  
        else if(sum>2*pow(10,5)) cout<<"YES"<<endl; 
        else if(cnt1==0) cout<<"YES"<<endl;
        else cout<<"Yes"<<endl;    
    }
    return 0;
}