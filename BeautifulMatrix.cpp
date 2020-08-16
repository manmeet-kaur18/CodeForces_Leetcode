#include<bits/stdc++.h>
using namespace std;

int main(){
	int A[5][5];
	int x1;
	int y1;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int y;
			cin>>y;
			A[i][j] = y;
			if(y==1){
				x1=i;
				y1=j;		
			}
		}
	}
	cout<<(abs(x1-2) + abs(y1-2));
	return 0;
}
