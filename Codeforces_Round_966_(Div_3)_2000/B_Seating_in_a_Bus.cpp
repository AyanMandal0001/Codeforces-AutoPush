#include<bits/stdc++.h>
using namespace std;
bool checkBusSeats(vector<int> & a,int n){
    set<int> occupied;
    for(int i =0;i<n;i++){
        int seat = a[i];
        if(i==0) occupied.insert(seat);
        else{
            if(occupied.count(seat-1)||occupied.count(seat+1)){
                occupied.insert(seat);
            }
            else return false;
        }
    }
    return true;
}
int main(){
    int t ;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i = 0;i<n;i++){
        cin>>a[i];
     }
     if(checkBusSeats(a,n)){
        cout<<"YES"<<endl;
     } 
     else cout<<"NO"<<endl;
    }
    return 0;
}