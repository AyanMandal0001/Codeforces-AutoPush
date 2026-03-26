#include<bits/stdc++.h>
using namespace std;

/*
    76 10 58 31 63 40 10 
    time = 10
*/

/*
    case #1
    3 4 9 2 4 1 8 9 4
    9 = 2, 1 = 3
    time 2+3 = 5

    case #2
    76 10 58 31 63 40 11 76 10
    10 = 7, 76 = 5
    time = 7+5 = 12
*/

// 10 10 58 31 63 40 76 11 76
// minPos = 1, maxPos = 6
// (n - 1 - minPos) = 9 - 1 - 1 = 7


int main(){
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int minimum = INT_MAX, minPos = 0;
    int maximum = 0, maxPos = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > maximum){
            maximum = a[i]; // maximum = 76, i = 9
            maxPos = i; // maxPos = 7
        }
        if(a[i] <= minimum){
            minimum = a[i]; // minimum = 10, i = 3
            minPos = i; // minPos = 1
        }
    }
    int ans;
    if(maxPos < minPos){
        ans = maxPos + (n - 1 - minPos);
    }
    else{
        ans = maxPos + (n - 1 - minPos) - 1;
    }
    cout<<ans<<endl;
    

    return 0;
}