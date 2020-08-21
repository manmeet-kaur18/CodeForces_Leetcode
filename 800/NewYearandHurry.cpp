#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int sum=0;
	int count=0;
	for(int i=1;i<=a;i++){
		sum+=5*i;
		int t = b+sum;
		if((240 - t) >= 0){
			count++;
		}
		else{
			break;
		}
	}
	cout<<count;
	return 0;
}
