#include<bits/stdc++.h>
#include<vector>
using namespace std;

void dfs(int u,vector<int> adj[],bool visited[],int &num){
	if(visited[u]==1){
		num = u;
		return;
	}
	else{
		visited[u]=1;
		for(int i=0;i<adj[u].size();i++){
			dfs(adj[u][i],adj,visited,num);
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> adj[n+1];
	for(int i=1;i<=n;i++){
		int y;
		cin>>y;
		adj[i].push_back(y);
	}
	bool visited[n+1];
	for(int i=0;i<n+1;i++){
		visited[i]=0;
	}
	int num;
	vector<int> v;
	for(int i=1;i<=n;i++){
		dfs(i,adj,visited,num);
		v.push_back(num);
		for(int i=0;i<n+1;i++){
		visited[i]=0;
		}
	}
	cout<<v[0];
	for(int i=1;i<v.size();i++){
		cout<<" "<<v[i];
	}
	return 0;
}
