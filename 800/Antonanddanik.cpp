#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int visited[2]={0,0};
	for(int i=0;i<n;i++){
		char c;
		cin>>c;
		if(c=='A'){
			visited[0]+=1;
		}
		else{
			visited[1]+=1;
		}
	}
	if(visited[0]>visited[1]){
		cout<<"Anton";
	}
	else if(visited[1]>visited[0]){
		cout<<"Danik";
	}
	else{
		cout<<"Friendship";
	}
	return 0;
}
