#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h;
	cin>>n;
	cin>>h;
	int w = 0;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		if(y>h){
			w+=2;
		}
		else{
			w+=1;
		}
	}
	cout<<w;
	return 0;
}
