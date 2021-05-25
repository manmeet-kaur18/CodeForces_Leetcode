#include<bits/stdc++.h>
using namespace std;

//seive technique

int main(){
	int n;
	cin>>n;
	vector<bool> prime(n+1,true);
	prime[1] = false;
	prime[2] = true;
	
	for(int i=1;i<=n;i++){
		if(prime[i]){
			for(int j=i*i;j<=n;j+=i){
				prime[j] = false;
			}
		}	
	}
	
	cout<<prime[n]<<endl;
	return 0;
}
