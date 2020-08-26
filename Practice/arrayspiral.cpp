#include<iostream>
using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int A[m][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>A[i][j];
		}
	}
	int i=0,k=0,l=0;
	while(k<m && l<n){
		for(i=l;i<n;i++){
			cout<<A[k][i];
		}
		k++;
		for(i=k;i<m;i++){
			cout<<A[i][n-1]<<" ";
		}
		n--;
		if(k<m){
			for(int i=n-1;i>=l;i++){
				cout<<A[m-1][i]<<" ";
			}
			m--;
		}
		
		if(l<n){
			for(int i=m-1;i>=k;i--){
				cout<<A[i][l]<<" ";
			}
			l++;
		}
	}
	return 0;
}
