#include <bits/stdc++.h>
using namespace std;

int solve(int n,int m,string x,string s) { 
    if (x.find(s) < x.size()) { // Imp line
        return 0 ;
    }
    bool flag = false;
    int cnt = 0;
    while( flag == false){
        x += x;
        cnt++;
        if(x.find(s)!=string::npos) return cnt;
        if(x.find(s) == string::npos && x.size() >= 2*m) return -1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m; 
        cin >> n >> m;
        string x, s; 
        cin >> x >> s;
        cout<<solve(n,m,x,s)<<endl;
    }
    return 0;
}
