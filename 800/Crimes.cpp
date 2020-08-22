#include<bits.stdc++.h>
using naemspace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count = 0;
	int crimes = 0;
	for(int i= 0;i<n;i++){
		if(arr[i]==1){
			count++;
		}
		else{
			if(count<0){
				crimes++;
			}
			else{
				count--;
			}
		}
	}
	cout<<crimes;
	return 0;
}
