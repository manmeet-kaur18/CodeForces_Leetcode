#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int t=0;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		t=t|y;
	}
	if(t==0){
		cout<<"EASY";
	}
	else{
		cout<<"HARD";
	}
	return 0;
}
