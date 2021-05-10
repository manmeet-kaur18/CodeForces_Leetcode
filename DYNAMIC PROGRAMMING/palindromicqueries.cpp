#include<bits/stdc++.h>
#include<climits>
using namespace std;

bool solve(string s,int l,int r,vector<vector<bool> > &dp){
	if(l==r){
		return true;
	}

	if(dp[l][r] != false ){
		return dp[l][r];
	}

	bool ans = solve(s,l+1,r-1,dp) && (s[l]==s[r]) ;
	cout<<l<<" "<<r<<" "<<ans<<endl;
	return dp[l][r] = ans;
}

//void query(int l,int r,vector<vector<bool>> &dp){
//	if(dp[l][r]){
//		cout<<"YES"<<endl;
//	}
//	else{
//		cout<<"NO"<<endl;
//	}
//}
int main () {
	string s;
	int n;
	cin>>n;
	cin>>s;
	vector<vector<bool> m > dp;
	for(int i=0;i<n;i++){
		vector<bool> c;
		for(int j=0;j<n;j++){
			c.push_back(false);
		}
		dp.push_back(c);
	}
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		if(solve(s,l-1,r-1,dp)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}
