#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int flag =0;
	for(int i=1;i<=n-1;i++){
		if(i%2==0 && (n-i)%2==0){
			cout<<"YES";
			flag =1;
			break;
		}
	}
	if(flag==0){
		cout<<"NO";
	}
	
	return 0;
}
