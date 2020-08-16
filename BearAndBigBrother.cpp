#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	int count=0;
	while(true){
		if(x>y){
			cout<<count;
			break;
		}
		x=x*3;
		y=y*2;
		count++;
	}
	return 0;
}
