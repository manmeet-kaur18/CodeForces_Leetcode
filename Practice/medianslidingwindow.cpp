#include<bits/stdc++.h>
using namespace std;
//
//multiset<int,greater<int> > l;
//multiset<int> r;
//
//
//void balance()
//{
//    if(l.size()>r.size()+1)
//    {
//        r.insert(*l.begin());
//        l.erase(l.begin());
//    }
//    else if(r.size()>l.size()+1)
//    {
//        l.insert(*r.begin());
//        r.erase(r.begin());
//    }
//        
//    return;
//}
//
//void insert(int x)
//{
//    if(l.empty() || *l.begin()>x)
//        l.insert(x);
//    else
//    	r.insert(x);
//        
//    balance();    
//    return;
//}
//    
//    
//double get()
//{
//    if(l.size()>r.size())
//        return double(*l.begin());
//    
//    else if(r.size()>l.size())
//        return double(*r.begin());
//        
//    return double((double(*l.begin())+double(*r.begin()))/2);
//}
//    
//vector<double> medianSlidingWindow(vector<int> &a, int k) 
//{
//    vector<int> v;
//    vector<double> res;
//    int i=0,j=0;
//        
//    while(j<a.size())
//    {
//        insert(a[j]);
//            
//        if(j-i+1==k)
//        {
//            res.push_back(get());                
//            multiset<int,greater<int> >::iterator itl=l.find(a[i]);
//            multiset<int>::iterator itr=r.find(a[i]);
//            
//            if(itl!=l.end())
//                l.erase(itl);
//            else
//                r.erase(itr);
//            balance();
//            i++;
//        }
//        j++;
//    }
//    return res;
//}

//int main(){
//	
//	int n,k;
//	cin>>n>>k;
//	vector<int> v(n,0);
//	for(int i=0;i<n;i++){
//		cin>>v[i];
//	}
//	
//	vector<double> res = medianSlidingWindow(v,k);
//	
//	for(int i=0;i<res.size();i++){
//		cout<<res[i]<<" ";
//	}
//	return 0;
//}
//
//
//int dfs(vector<vector<int> >& arr, int i, int j, int m, int n){
//        if(i<0 || j<0||i>m-1|| j>n-1|| arr[i][j]!=1)
//            return 0;
//        arr[i][j]='v';
//        return 1+dfs(arr,i+1,j,m,n)+ dfs(arr,i,j+1,m,n)+ dfs(arr,i-1,j,m,n)+dfs(arr,i,j-1,m,n);
//}
//
//int maxAreaOfIsland(vector<vector<int> >& arr) {
//    int m=arr.size();
//    int n=arr[0].size();
//    int ans=0;
//    for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){
//            if(arr[i][j]==1){
//                int x=dfs(arr,i,j,m,n);
//                ans=max(ans,x);
//            }
//        }
//    }
//    return ans;
//}
//
//int main()
//{
//	int n,m;
//	cin>>n>>m;
//	vector<vector<int> > grid(n,vector<int>(m,0));
//	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cin>>grid[i][j];
//		}
//	}
//	
//	cout<<maxAreaOfIsland(grid);
//	return 0;
//}


vector<int> solve(vector<int> arr){
	stack<pair<int,int> > s;
	vector<int> res(arr.size(),0);
	
	for(int i=0;i<arr.size();i++){
		if(s.empty()){
			s.push(make_pair(arr[i],i));
			continue;
		}
		while(!s.empty() && s.top().first < arr[i]){
			pair<int,int> temp = s.top();
			res[temp.second] = arr[i];
			s.pop();
		}
		s.push(make_pair(arr[i],i));
	}
	
	while(!s.empty()){
		pair<int,int> temp = s.top();
		res[temp.second] = -1;
		s.pop();
	}
	
	return res;
}

int main()
{
	int n;
	cin>>n;
	vector<int> v(n,0);
	
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	vector<int> res = solve(v);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	
	return 0;
}
