#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

void solve(){ 
	long long a  , b , c; cin >> a >> b>>  c;
     //b x m
	if( (a+c) % (2*b) == 0) {cout<< "YES" <<endl;}
	//a x m
	else if((2*b-c) % a == 0 and (2*b-c) / a > 0 ) {cout<< "YES" << endl;} //additional conditon  as m > 0
	// c x m
	else if((2*b-a) % c == 0 and (2*b-a) / c > 0) {cout << "YES" << endl;} // additional condition as m > 0
	else {cout << "NO" <<endl;}
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long tt; cin >> tt;
	while(tt--){
		solve();
	}
}
