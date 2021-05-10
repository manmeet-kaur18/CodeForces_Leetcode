#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> arr,int k){
	int f_maxele = 0;
	int s_maxele = 0;
	int index = 0;
	
	int me = INT_MIN;
	priority_queue<int,vector<int>,greater<int> > pq;
	int ie = 0;
	
	int count = 1;

	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" "<<f_maxele<<" "<<s_maxele<<endl;
		if(abs(index-i) != k ){
			arr[i]= arr[i] + f_maxele;
		}		
		else{
			arr[i] = arr[i]+ s_maxele;
		}
		
		if(pq.empty()){
			pq.push(arr[i]);
		}
		else{
			if(pq.top()<arr[i]){
				pq.pop();
				pq.push(arr[i]);
			}
		}
		
		if(arr[i] > me){
			me = arr[i];
			ie = i;
		}
		
	
		
		if(count == k){
			if(me >= f_maxele ){
				f_maxele = me;
				index = ie;
				s_maxele = pq.top();
				pq.pop();
				pq.pop();
			}
			count = 1;
		}
		else{
			count++;
			
		}
	}
	
	if(me >= f_maxele ){
		f_maxele = me;
		index = ie;
		s_maxele = pq.top();
		pq.pop();
		pq.pop();
	}
	cout<<me<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return f_maxele;
}


int main(){
	int n,k;
	cin>>n>>k;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		arr.push_back(y);
	}
	cout<<solve(arr,k)<<endl;
	return 0;
}
