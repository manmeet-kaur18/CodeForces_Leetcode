#include<bits/stdc++.h>
using namespace std;

 int numSubmat(vector<vector<int> >& mat) {
        int A[mat.size()+1][mat[0].size()+1];
        int dp[mat.size()+1][mat[0].size()+1];
        
        for(int i=1;i<=mat[0].size();i++){
            dp[0][i] = 0;
            A[0][i]=0;
        }
        
        A[0][0] = 0;
        dp[0][0] = 0;
        for(int i=1;i<=mat.size();i++){
            dp[i][0] = 0;
            A[i][0] = 0;
        }
        
        for(int i=1;i<= mat.size();i++){
            for(int j=1;j <= mat[0].size();j++){
                A[i][j] = mat[i-1][j-1];
            }
        }
        
        for(int i=1;i<= mat.size();i++){
            for(int j=1;j <= mat[0].size();j++){
                dp[i][j] = 0;
            }
        }
        
        cout<<"dp"<<endl;
        for(int i=0;i<= mat.size();i++){
            for(int j=0;j <= mat[0].size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        
        cout<<"A"<<endl;
        for(int i=0;i<= mat.size();i++){
            for(int j=0;j <= mat[0].size();j++){
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
        
        for(int i=1;i<=mat.size();i++){
            for(int j=1;j<=mat[0].size();j++){
                if(A[i][j]==0){
                    dp[i][j] = 0;
                }
                else{
                    int ans = min(dp[i-1][j],dp[i][j-1]);
                    
                    if(i==3 && j==2){
                    	cout<<A[i][j-1]<<" "<<A[i-1][j]<<endl;
					}
                    
                    if(A[i][j-1] == 1 && A[i-1][j] == 1){
                        ans += 3;
                    }
                    else if(A[i][j-1] == 1 && A[i-1][j] ==0){
                        ans += 2;
                    }
                    else if(A[i][j-1] == 0 && A[i-1][j] ==1){
                        ans+=2;
                    }
                    else{
                        ans+=1;
                    }
                    dp[i][j] = ans;
                }
                
            }
        }
        cout<<"dp"<<endl;
        for(int i=0;i<= mat.size();i++){
            for(int j=0;j <= mat[0].size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        int rectangles = 0;
        for(int i=1;i<=mat.size();i++)
        {
            for(int j=1;j<=mat[0].size();j++){
                rectangles += dp[i][j];
            }
        }
        
        return rectangles;
    }
    
int main(){
	int A[3][4]={{0,1,1,0},{0,1,1,1},{1,1,1,0}};
    
    vector<vector<int> > mat;
    
    for(int i=0;i<3;i++){
    	vector<int> a;
    	for(int j=0;j<4;j++){
    		a.push_back(A[i][j]);
		}
		mat.push_back(a);
	}
	
	cout<<numSubmat(mat)<<endl;
	return 0;
}
