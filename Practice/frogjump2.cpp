#include<bits/stdc++.h>
using namespace std;

long long minimumCost(int stones[], int k){
    int n = 3;
	vector<long long> dp(n,INT_MAX);
    
    
    dp[0] = 0;
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if((j-i)<=k){
                dp[i] = min(dp[i],abs(stones[i]-stones[j])+dp[j]);
            }
        }
    }
    
    return dp[n-1];
}

int main(){
	int stones[3]={10,20,10};
	int k = 2;
	
	cout<<minimumCost(stones,k);
	return 0;
}
