#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int corner = 4;
	if(n==1){
		cout<<n;
		exit(0);
	}
	if(n==2){
		cout<<5;
		exit(0);
	}
	int cells = 5;
	int prevcorner = 4;
	int prevbetween = 0; 
	for(int i=3;i<=n;i++){
		int t = 3*prevcorner + 2*prevbetween - 4;
		int newbetween = t/2;
		cells = cells+ newbetween + 4;
		prevbetween = newbetween; 
	}
	
	cout<<cells;
	return 0;
}
