#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int w;
	cin>>w;
	vector<int> profits;
	vector<int> weights;
	int A[n+1][w+1];
	for(int i=0;i<n;i++){
		int p;
		cin>>p;
		profits.push_back(p);
	}
	
	for(int i=0;i<n;i++){
		int wt;
		cin>>wt;
		weights.push_back(wt);
	}
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=w;j++){
			
			if(i==0||j==0){
				A[i][j]=0;
			}
			
			if(j<weights[i]){
				A[i][j] = A[i-1][j];
			}
			else{
				A[i][j] = max(A[i-1][j],A[i-1][j-weights[i]]+profits[i]);
			}
		}
	}
	
	cout<<A[n][w];
	return 0;
	
}
