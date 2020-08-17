#include<bits/stdc++.h>
#include<map>
#include <string>
#include <sstream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<string,int> m;
	map<string,int> m1;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	
	
	for(int i=0;i<n;i++){
		string str = v[i];
		if(m.find(str)==m.end()){
			m[str]=1;
			cout<<"OK"<<endl;
		}
		else{
			if(m1.find(str)==m1.end()){
				int i= 1;
				m1[str] = 1;
				ostringstream str1; 
				str1 << i; 
				string geek = str1.str(); 
				str += geek;
				cout<<str<<endl;
//				m[str] = 1;
			}
			else{
				int i= m1[str]+1;
				m1[str] += 1;
				ostringstream str1; 
				str1 << i; 
				string geek = str1.str(); 
				str += geek;
				cout<<str<<endl;
//				m[str] = 1; 
			}
//			while(true){
//				ostringstream str1; 
//			    str1 << i; 
//			    string geek = str1.str(); 
//				str += geek;
//				if(m.find(str) == m.end()){
//					m[str] = 1;
//					cout<<str<<endl;
//					break;
//				}
//				else{
//					str.erase(str.size() - 1);
//					i++;
//				}
//			}
		}
	}
	
	return 0;	
}
