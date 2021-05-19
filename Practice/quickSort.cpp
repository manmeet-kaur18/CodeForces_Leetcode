//quicksort

#include<bits/stdc++.h>
using namespace std;

int partition(int low,int high,vector<int> &arr){
	
	int pivot = arr[high]; 
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int quicksort(int l,int r,vector<int> &arr){
	if(l < r){
		int x = partition(l,r,arr);
		quicksort(l,x-1,arr);
		quicksort(x+1,r,arr);
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n,0);
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	quicksort(0,n-1,arr);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


