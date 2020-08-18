#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> final;

void dfs(int u,vector<int> &v,bool visited[],list<int> adj[],int n){
	
		visited[u]=1;
		v.push_back(u);
	if(u==n){
		final = v;
		return;
	}
	else
	{		
		list<int>::iterator i; 
	    for (i = adj[u].begin(); i != adj[u].end(); ++i){
	        if (!visited[*i]) 
	        {
	            dfs(*i,v,visited,adj,n);
			}
			v.pop_back();
		} 
	}
}

int main(){
	int n;
	cin>>n;
	list<int> adj[n+1];
	bool visted[n+1]={0};
	for(int i=2;i<=n;i++){
		int t;
		cin>>t;
		adj[t].push_back(i);
	}
	vector<int> v;
	dfs(1,v,visted,adj,n);
	for(int i=0;i<final.size();i++){
		cout<<final[i]<<" ";
	}
	return 0;
}
