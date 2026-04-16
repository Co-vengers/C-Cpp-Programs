#include <iostream>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n, m, k; cin>>n>>m>>k;

		int prod_k = (n * m) - k;

		int mod_n = prod_k % n;
		int mod_m = prod_k % m;

		if(mod_n < mod_m){
			cout<<n * (m - ((k + mod_n) / n))<<endl;
		}
		else if(mod_n == mod_m){
			cout<<n * (m - ((k + mod_n) / n))<<endl;
		}
		else{
			cout<<m * (n - ((k + mod_m) / m))<<endl;
		}
	}
	return 0;
}