#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m,int dp[]){
	if(n==0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	if(n == m){
		return 2;
	}
	if(dp[n]!=0){
		return dp[n];
	}

	int op1 = 0;
	int op2 = 0;
	if( n-1 > 0){
		op1 = solve(n-1,m,dp);
	}
	if(n-4 > 0){
		op2 = solve(n-m,m,dp);
	}
	int ans = op1 + op2;
	dp[n] = ans;
	return ans;
}

int main() {
	int testcase;
	cin>>testcase;
	
	while(testcase--){
		int n;
		int m;
		cin>>n>>m;
		int dp[100000]={0};
		cout<<solve(n,m,dp);
	}
	return 0;/ tile a floor of size n x m using 1 x m tiles 
#include <bits/stdc++.h> 

using namespace std; 
int dp[1000000] = {0};

// function to count the total number of ways 
int solve(int n, int m) {
  	if(n==0){
		return 0;
	}
  	if(n==m){
    	return 2;
    }
	if(n == 1 || n < m){
		return 1;
	}
	int	op1 = solve(n-1,m);
  	int op2 = solve(n-m,m);
	int ans = op1 + op2;
	dp[n] = ans;
	return ans;
} 

// Driver program to test above 
int main() 
{ 
	int n = 16, m = 4; 
	cout << "Number of ways = "
		<< solve(n, m); 
	return 0; 
} 

