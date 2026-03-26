#include<bits/stdc++.h>
using namespace std;
// . means file not saved
void solve(){
	long long  n , q ; cin >> n >> q;
	long long arr[n];
	long long prefixSum[n+1];
	memset(prefixSum,0,sizeof(prefixSum));
	
	for(long long i=0;i< n;i++){
		cin >> arr[i];
	} 
	// prefixSum
	for(long long i = 1 ;i <=n ;i++){
        prefixSum[i] = arr[i-1] + prefixSum[i-1];
	}
    long long prev_sum = prefixSum[n];

	while(q--){
		long long l , r, k ;
		cin >> l >> r >> k;
       long long negative_sum = prefixSum[r]-prefixSum[l-1];
       long long positive_sum = k * (r-l+1);
       if((prev_sum - negative_sum + positive_sum) % 2 == 1) cout << " YES" <<endl;
       else cout << "NO" <<endl;
	}
	return;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long tt ; 
	cin >> tt;
	while(tt--){
		solve();
	}
}
