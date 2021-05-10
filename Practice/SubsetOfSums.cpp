#include<bits/stdc++.h>
using namespace std;

void getsubsetsum(vector<vector<int> > &v, vector<int> c,int currentsum ,int n,int arr[],int visitedarr[],int start){
	
	if(currentsum == 0){
		v.push_back(c);
		return;
	}
	if(currentsum<0){
		return;
	}
	for(int i = start;i< 6;i++){
		if(!visitedarr[i]){
			visitedarr[i] = 1;
			c.push_back(arr[i]);
			getsubsetsum(v,c,currentsum-arr[i],n,arr,visitedarr,i);
			c.pop_back();
			visitedarr[i] = 0;
		}
	}
}

int main(){
	
	int n=6;
	int arr[]={10,7,18,12,20,15};
	int sum=35;
	vector<vector<int> > v;
	vector<int> c;
	int visitedarr[n]={0};
	
	for(int i=0;i<6;i++){
		
		if(!visitedarr[i]){
			visitedarr[i] = 1;
			c.push_back(arr[i]);
			getsubsetsum(v,c,sum - arr[i],n,arr,visitedarr,i);
			c.pop_back();
			visitedarr[i] = 0;
		}
		
	}
	
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
