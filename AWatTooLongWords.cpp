#include<bits/stdc++.h>
#include<vector>
#include<string>
#include <sstream>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s.length()>10){
			string s1 = "";
			s1+=s[0];
			int num = s.length()-2; 
		    ostringstream str1; 
		    str1 << num; 
		    string geek = str1.str();
			s1+=geek;
			s1+=s[s.length()-1];
			v.push_back(s1); 
		}
		else{
			v.push_back(s);
		}
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}
