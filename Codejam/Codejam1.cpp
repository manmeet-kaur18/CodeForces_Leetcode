#include<bits/stdc++.h>
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

int reverseSort(vector<int> arr){
    int ans = 0;
    
    for(int i = 0 ; i < arr.size()-1 ; i++){   
		int j = min_element(arr.begin()+i,arr.end())-arr.begin();		
		reverseArray(arr,i,j);
//        for(int k=0;k<arr.size();k++){
//        	cout<<arr[k]<<" ";
//		}
//		cout<<endl;
//        cout<<i<<" "<<j<<endl;
        ans = ans + (j-i+1);
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    int count=1;
    while(t>0){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            arr.push_back(y);
        }
        t-=1;
        cout<<"Case #"<<count<<": "<<reverseSort(arr)<<endl;
        count++;
    }
    
    return 0;
}
