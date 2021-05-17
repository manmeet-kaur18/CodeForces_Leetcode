//heapsort
//min heap build
//kmp
//maxproduct subarray

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = 5;
	int arr[n] ={-2, -40, 0, -2, -3};
	
	int maxprod = 1;
	int inclprod = 1;
	int exclprod = 1;
	
	for(int i=0;i<n;i++){
		
		int temp = exclprod;
		int temp1 = inclprod;
			
		if(arr[i] < 0){			
			inclprod = max(temp*arr[i],1);
			exclprod = min(temp1*arr[i],1);
		}
		else if(arr[i] > 0){
			inclprod = max(temp1*arr[i],1);
			exclprod = min(temp*arr[i],1);
		}
		else{
			inclprod = 1;
			exclprod = 1;
		}
		
		maxprod = max(maxprod,inclprod);
	}
	
	cout<<maxprod<<endl;
	return 0;
}
