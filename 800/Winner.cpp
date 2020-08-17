#include<bits/stdc++.h>
#include<map>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<string,pair<int,int> > m;
	map<string,pair<int,int> > m1;
	int counter = 1;
	
	for(int i=0;i<n;i++){
		string str;
		int y;
		cin>>str>>y;
		if(y>0){	
			if(m.find(str) != m.end()){
				m[str].first += y;
				m[str].second = counter;
				if(m[str].first > m1[str].first){
					m1[str].first = m[str].first;
					m1[str].second = counter;
				}
			}
			else{
				m[str].first = y;
				m[str].second = counter;
				m1[str].first = y;
				m1[str].second = counter;
				
			}
		}
		else{
			if(m.find(str) != m.end()){
				m[str].first += y;
			}
			else{
				m[str].first = y;
				m[str].second = counter;
			}
		}
		counter++;
	}
	
	string winner;
	int pts = 0;
	int wcount = counter+1;
	map<string, pair<int,int> >::iterator it;
    
	for ( it = m.begin(); it != m.end(); it++ ){
		if(it->second.first >pts){
			pts = it->second.first;
			winner = it->first;
			wcount = m1[it->first].second;
		}
		else if(it->second.first==pts){
			if(m1[it->first].first >= pts && m1[it->first].second < wcount){
				pts = it->second.first;
				winner = it->first;
				wcount = m1[it->first].second;
			}	
		}
	}
	cout<<winner<<endl;
	return 0;
}
