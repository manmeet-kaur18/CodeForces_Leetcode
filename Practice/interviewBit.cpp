#include<bits/stdc++.h>
using namespace std;

vector<int> maxset(vector<int> &arr) {
    
    int maxlength = INT_MIN;
    int maxsum = INT_MIN;
    int maxstart = 0;
    int maxend = 0;
    
    for(int i = 1; i < arr.size() ; i++){
        int sum = 0;
        int j =0;
        
	    for (int j = 0; j < i;j++) 
	        sum += arr[j]; 
	  
	  	if(sum > maxsum){
            maxsum = max(maxsum,sum);
            maxlength = i;
            maxstart = 0;
            maxend = i-1 ;
        }
        
        if(sum == maxsum){
            maxlength = max(maxlength,i);
            maxend = i - 1 ;
            maxstart = 0;
        }
        
	    for (int k = i; k < arr.size(); k++) { 
	        sum += arr[k] - arr[k - i]; 
	        
	        if(sum > maxsum){
            	maxsum = max(maxsum,sum);
                maxlength = i;
                maxstart = k-i+1;
                maxend = k;
            }
            
            if(sum == maxsum){
                maxlength = max(maxlength,i);
                maxstart = k-i+1;
                maxend = k;
            }
	    } 
	}
    
 
    vector<int> v;
    for(int i=maxstart;i<=maxend;i++){
        v.push_back(arr[i]);
    }
    
    return v;
    
}

int main(){
	vector<int> A;
	int B []= {1,2,5,-7,2,3};
	for(int i=0;i<6;i++){
		A.push_back(B[i]);
	}
	vector<int> v = maxset(A);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
