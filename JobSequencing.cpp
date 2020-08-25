#include<bits/stdc++.h>
using namespace std;

bool sortf(pair<int,int> a, pair<int,int> b){
	return a.first> b.first;
}

int main(){
	int jobscount;
	cin>>jobscount;
	vector<pair<int,int> > timeprofit;
	int max=0;
	for(int i=0;i<jobscount;i++){
		int p,d;
		cin>>p>>d;
		if(d>max){
			max=d;
		}
		timeprofit.push_back(make_pair(p,d));
	}
	
	sort(timeprofit.begin(),timeprofit.end(),sortf);
	int visted[max];
	for(int i=0;i<max;i++){
		visted[i]=-1;
	}
	
//	for(int i=0;i<jobscount;i++){
//		pair<int,int> t=timeprofit[i];
//		cout<<t.first<<" "<<t.second;
//	}
//	
	int profit=0;
	int done[jobscount] = {0};
	
	for(int i=0;i<jobscount;i++){
		pair<int,int> t=timeprofit[i];
		cout<<t.first<<endl;
		for (int j= t.second-1; j>=0; j--) 
	    {  
	        if (visted[j] == -1 && done[i] == 0) 
	        {
//			    cout<<"enterd"<<" "<<t.first<<endl;   
	          	done[i] = 1;
	          	profit+= t.first;
	            visted[j] = i;
	            break;
	        }
	    }	
		
	}
	
	for(int i=0;i<max;i++){
		cout<<visted[i]<<endl;
	}
	cout<<profit;
	return 0;
}
