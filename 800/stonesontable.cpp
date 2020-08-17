#include<bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	char data[n];
	for(int i=0;i<n;i++){
		char y;
		cin>>y;
		data[i] = y;
	}
	char prev=data[0];
	int count =0;
	for(int i=1;i<n;i++){
		if(data[i] == prev){
			count++;
			prev = data[i];
		}
		else{
			prev = data[i];
		}
	}
	cout<<count;
	return 0; 
}
