#include<bits/stdc++.h>
using namespace std;

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
		if(arr[i]>0){
		
			count += arr[i];
		}
		else{
			if(count<= 0){
				crimes++;
			}
			else{
				count-=1;
			}
		}
	}
	cout<<crimes;
	return 0;
}
