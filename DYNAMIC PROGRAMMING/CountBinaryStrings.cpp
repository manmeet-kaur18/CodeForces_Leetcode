#include<bits/stdc++.h>
using namespace std;

int solve(int n){
	int dp1[n+1] = {0};
	int dp2[n+1] = {0};

	dp0[1]=1;
	dp1[1]=1;

	for(int i=2;i<=n;i++){
		dp1[i] = dp0[i-1];
		dp0[i] = dp1[i-1] + dp0[i-1];
	}

	return dp0[n] + dp1[n];
}

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
		int n;
		cin>>n;
		cout<<solve(n)<<endl;
	}

	return 0;
}
