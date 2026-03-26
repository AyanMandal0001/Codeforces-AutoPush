#include <bits/stdc++.h>
using namespace std;
bool isSatisfied(string s){ // every adjacent characters are same
    int n = s.length();
    for(int i = 0;i<n-1;i++){
        if(s[i]!=s[i+1]) return false;
    }
    return true;
}
bool condition(string &s){
    int cnt = 0;
    while(s!="" and isSatisfied(s)==false){
      cnt++;
      string temp="";
      int index1 = -1,index2 = -1;
      for(int i = 0;i<s.length()-1;i++){
        if(s[i]!=s[i+1]){
            index1 = i;
            index2 = i+1;
        }
      }
      for(int i = 0;i<s.length();i++){      
        if(i!=index1 and i!=index2) temp+=s[i];
      }
      s = temp; 
    }
    return (cnt%2==1); 
}
void solve(){ // O(n^2) time complexity
     string s ; cin >> s;
     if(condition(s)) cout<<"DA"<<endl; //  YES in Russian
     else cout<<"NET"<<endl; // NO in Russian
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}