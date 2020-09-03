#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	float x = (a-b+c)/2.0;
	float z = (c-a+b)/2.0;
	float y = (a+b-c)/2.0;
	
	
	if(x>=0 && y>=0 && z>=0 && abs(x-int(x)) == 0 && abs(y-int(y)) == 0 && abs(z-int(z)) == 0){
		cout<<int(y)<<" "<<int(z)<<" "<<int(x);
	}
	else{
		cout<<"Impossible";
	}
	return 0;
}
