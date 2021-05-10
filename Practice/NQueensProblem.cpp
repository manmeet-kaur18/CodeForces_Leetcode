#include<bits/stdc++.h>
using namespace std;
int N=4;

bool isSafe(int row,int j,vector<pair<int,int> > c){
	
	for(int i=0;i<c.size();i++){
		if(abs(c[i].first -row) == abs(c[i].second - j)){
			return false;
		}
		
		if(c[i].first == row){
			return false;
		}
		
		if(c[i].second == j){
			return false;
		}
	}
	
	return true;
}

void solve(vector<vector<pair<int,int> > > &v,vector<pair<int,int> > c,int board[4][4], int row){
	
	if(row >= N){
		v.push_back(c);
		return;
	}
	
	for(int i=0;i<N;i++){
		if(isSafe(row,i,c)){
			c.push_back(make_pair(row,i));
			solve(v,c,board,row+1);
			c.pop_back();
		}
	}
}

int main(){
	int board[4][4] = { { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 } };
    vector<vector<pair<int,int> > > v;
    vector<pair<int,int> > c;
    int row = 0;
    
	for(int i=0;i<N;i++){
    	c.push_back(make_pair(row,i));
		solve(v,c,board,row+1);
		c.pop_back();
	}
	
	for(int i=0;i<v.size();i++){
		cout<<i<<" configuration"<<endl;
		
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j].first<<","<<v[i][j].second<<endl;
		}
		cout<<endl;
	}
	return 0;
}
