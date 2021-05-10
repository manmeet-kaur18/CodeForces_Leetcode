#include<bits/stdc++.h>
using namespace std;

int getcount(int mid,vector<int> &A){
    int sum = 0;
    
    for(int i=0;i<A.size();i++)
        if(A[i]>mid)
            sum+=(A[i]-mid);
            
    return sum;
}
int solve(vector<int> &A, int B) {
    int minele = INT_MAX;
    int maxele = INT_MIN;
    
    for(int i=0;i<A.size();i++){
        minele = min(minele,A[i]);
        maxele = max(maxele,A[i]);
    }
    
    int low = minele;
    int high = maxele;
    int mid = 0;
    
    while(low <= high){
        
        mid = low + (high-low)/2;
        
        if(getcount(mid,A) == B){
            return mid;    
        }
        else if(getcount(mid,A) < B){
            high = mid-1;
        }
        else{
            low = mid+1;   
        }
    }
    
    return high;
}

int main(){
	int n;
	cin>>n;
	vector<int> A(n,0);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int B;
	cin>>B;
	cout<<solve(A,B);
	return 0;
}

//20 15 10 17

