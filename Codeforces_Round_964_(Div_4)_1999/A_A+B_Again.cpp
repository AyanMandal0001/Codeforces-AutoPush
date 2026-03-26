#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum,digit1,digit2,n,k;
    cin>>n;
 for(int i =0;i<n;i++){
    cin>>k;
    digit1 = k/10;
    digit2= k%10;
    sum = digit1+digit2;
   cout<< sum<<endl;
    } 
}
