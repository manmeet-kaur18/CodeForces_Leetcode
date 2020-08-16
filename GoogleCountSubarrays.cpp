#include<bits/stdc++.h>
using namespace std;

vector<int> getcount(vector<int> a,int n){
	int T[n+1][n+1]={0};
	
	T[0][0]=0;

	for(int i=1;i<n+1;i++){
		T[0][i]=a[i-1];
	}
	T[1][1]=1;
	
	for(int i=1;i<n+1;i++){
		if(i!=1){
			T[i][1] = 0;
		}
		T[i][0] = a[i-1];
	}
	
//	for(int i=0;i<n+1;i++){
//		for(int j=0;j<n+1;j++){
//			cout<<T[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
	cout<<endl;
	
	for(int i=2;i<n+1;i++){
		for(int j=1;j<n+1;j++){
//			cout<<T[i][0]<<" "<<T[0][j]<<endl;
            
			if(T[i][0] >= T[0][j] && T[i-1][j] !=0 ){
				int k=i;
				int pos=-1;
				int elecount=0;
				while(k>=1){
//					cout<<T[k-1][0]<<" "<<T[0][j]<<endl;
					if(T[k-1][0]>=T[0][j]){
						elecount++;
						if(T[0][j]==T[k-1][0]){
							pos = k-1;
						}
					}
					
					else{
						break;
					}
					k--;
				}
				if(pos!= -1){
				    T[i][j]=T[i-1][j]- abs(i-pos-1)+elecount;
				}
				else{
				    T[i][j]=T[i-1][j];
				}
			}
			else if(T[i][0] == T[0][j]){
			    int k=i;
				int elecount=0;
				while(k>=1){
//					cout<<T[k-1][0]<<" "<<T[0][j]<<endl;
					if(T[k-1][0]>=T[0][j]){
						elecount++;
					}
					else{
						break;
					}
					k--;
				}
				T[i][j] = T[i-1][j]+elecount+1;
			}
			else{
				T[i][j]=T[i-1][j];
			}
		}
	}
	for(int i=0;i<n+1;i++){
		for(int j=0;j<n+1;j++){
			cout<<T[i][j]<<" ";
		}
		cout<<endl;
	}
	
	vector<int> v;
	for(int i=1;i<n+1;i++){
		v.push_back(T[n][i]);
	}
	return v;
}

int main(){
	int n;
	cin>>n;
//	int arr[n]={3,2,4,1,5};
	vector<int> a;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		a.push_back(y);
	}
	
	vector<int> c =getcount(a,n);
	for(int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
