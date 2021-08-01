#include<bits/stdc++.h>
using namespace std;

vector<int> result;

void solve(int i,int j,int n,vector<vector<char>> c,vector<int> &v){
    
    if(i >= n || j >= n || c[i][j]=='X'){
        return;
    }
    
    if( (i*n+j+1) == n*n ){
        result = v;
        return;
    }    
    
    int t1 = i*n+j+1+1;
    int t2 = (i+1)*n+j+1;
    
    v.push_back(t1);
    solve(i,j+1,n,c,v);
    v.pop_back();
    
    v.push_back(t2);
    solve(i+1,j,n,c,v);
    v.pop_back();
    
}

vector<int> findPath(int n, vector<vector<char>> c){
    vector<int> v;
    solve(0,0,n,c,v);
    return result;
}

int main(){
	vector<vector<int> > v={{''}};
}
