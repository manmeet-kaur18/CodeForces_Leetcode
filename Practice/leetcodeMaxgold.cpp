#include<bits/stdc++.h>
using namespace std;


int dx[4] = {1,-1,0,0};
int dy[4] = {0, 0,1,-1};  

void getgold(vector<vector<int> > grid, vector<vector<int> > visited, int &maxsum, int currsum,int i, int j){
        visited[i][j] = 1;
        currsum += grid[i][j];
        // cout<<i<<" "<<j<<endl; 
        maxsum = max(currsum,maxsum);
        
    for(int k=0;k<4;k++){
        int nx = i + dx[k];
        int ny = j + dy[k];
        if(nx<grid.size() && nx>=0 && ny>=0 && ny<grid[0].size()){
            if(!visited[nx][ny] && grid[nx][ny]!=0){
                getgold(grid,visited,maxsum,currsum,nx,ny);
            }
        }
    }
        
}
    
int getMaximumGold(vector<vector<int> >& grid) {
        
    vector<vector<int> > visited;
        
    for(int i=0;i<grid.size();i++){
        vector<int> c;
        for(int j=0;j<grid[0].size();j++){
            c.push_back(0);
        }
        visited.push_back(c);
    }
    int maxsum = 0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.size();j++){
            if(grid[i][j]!=0 && !visited[i][j]){
                getgold(grid,visited,maxsum,0,i,j);
            }
        }
    }
    return maxsum;
}

int main()
{
	vector<vector<int> > grid;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		vector<int> c;
		for(int j=0;j<m;j++){
			int y;
			cin>>y;
			c.push_back(y);
		}
		grid.push_back(c);
	}
	
	cout<<getMaximumGold(grid);
	return 0;
}
