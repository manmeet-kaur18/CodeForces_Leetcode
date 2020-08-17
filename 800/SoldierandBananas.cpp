#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	int sum = ((z*(z+1))/2)*x;
	if(sum<y){
		cout<<0;
	}
	else{
		cout<<sum-y;
	}
	return 0; 
}
