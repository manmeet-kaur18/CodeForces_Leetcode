#include<bits/stdc++.h>
using namespace std;

vector<int> wave(vector<int> &A) {
    vector<int> v;
    sort(A.begin(),A.end());
    
    for(int i=1;i<A.size();i+=2){

        v.push_back(A[i]);
    }
    
    for(int i=0;i<A.size();i+=2)
    {
    	if(i==A.size()-1){
    		v.push_back(A[i]);
		}
		else{
        	v.insert(v.begin()+i+1,A[i]);
    	}
    }
    return v;
}

int main(){
	int n=5;
	int B[] = {1,2,3,4,5};
	vector<int> A;
	for(int i=0;i<5;i++){
		A.push_back(B[i]);
	}
	vector<int> v=wave(A);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
