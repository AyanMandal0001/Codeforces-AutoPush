#include <bits/stdc++.h>
using namespace std;

// *******************************************************************************//
void solve(){
 int n ; cin >> n;
 string s ="BAN";
 string t="";
 for(int i=0;i<n;i++){
    t += s;
 }

 int i=0,j=t.size()-1;
 vector<int>bb;
 while(i<j){
   
        if(t[i]=='A' and t[j]=='N') {
            bb.push_back(i);
            bb.push_back(j);
            swap(t[i],t[j]);
            i++;
            j--;
        }
        else  if(t[i]!='A' and t[j]=='N'){i++;}
        else  if(t[j]!='N' and t[i]=='A'){j--;}
        else{
            i++;
            j--;
        }
 }
  cout<< bb.size()/2 << endl;
    for(int i=0;i<bb.size();i+=2){
        cout<< bb[i]+1 << " " << bb[i+1]+1 << endl;// 1 based indexing
       }
}
int main(){


    int tt=1;
    cin>>tt;
    for (int i = 0; i < tt; i++)
    {
        solve();
    }
}