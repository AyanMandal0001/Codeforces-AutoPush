#include<bits/stdc++.h>
using namespace std;

int main(){
  
     int n,copy;
      cin>>n;
     copy = n;
        if(n<10) cout<<"1"<<endl;
   else{   int noOfDigit=0;int firstDigit=0;
      while(n>0){
        if(n<10){
           firstDigit=n;
      }
        n /= 10;
        noOfDigit++;
      }       
       string strNumber = to_string(firstDigit+1);
         int zeroesToAdd=noOfDigit-1;
    // Append the zeroes
    for (int i = 0; i < zeroesToAdd; ++i) {
        strNumber += '0';
    }

    // Convert the string back to an integer (if needed)
    int newNumber = stoi(strNumber);        
             cout<<newNumber-copy<<endl;         
    }
    return 0;
}