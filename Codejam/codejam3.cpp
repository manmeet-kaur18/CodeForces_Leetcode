#include <bits/stdc++.h>
using namespace std;


void reverseArray(vector<int> &arr, int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    

int reverseSort(vector<int> arr,int c){
    
	int ans = 0;
    
    for(int i = 0 ; i < arr.size()-1 ; i++){   
		int j = min_element(arr.begin()+i,arr.end())-arr.begin();		
		reverseArray(arr,i,j);
        ans = ans + (j-i+1);
    }
    
    return ans==c;
}


void printArr(int a[], int n, vector<int> &arr)
{
    	for (int i = 0; i < n; i++)
        	arr.push_back(a[i]);
}
 
void heapPermutation(int a[], int size, int n,vector<int> &arr,int c)
{
    if (size == 1) {
    	vector<int> v;
    	for(int i=0;i<n;i++){
    		v.push_back(a[i]);
		}
    	if(reverseSort(v,c) && arr.size()==0){
        	printArr(a, n, arr);
    	}
        return;
    }
 
    for (int i = 0; i < size; i++) {
        heapPermutation(a, size - 1, n,arr,c);
 
        if (size % 2 == 1)
            swap(a[0], a[size - 1]);
        else
            swap(a[i], a[size - 1]);
    }
}


int main()
{
	int t;
	cin>>t;
	
	while(t>0){
			
		int n,c;
		cin>>n>>c;
		int a[n];
		
		for(int i=1;i<=n;i++){
			a[i-1]=i;
		}
		
	    vector<int> arr;
	    heapPermutation(a, n, n,arr,c);
	    
	    if(arr.size()!=0){
	    	for(int i=0;i<arr.size();i++){
	    		cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"IMPOSSIBLE"<<endl;
		}
		t-=1;
	}
	
    return 0;
}
