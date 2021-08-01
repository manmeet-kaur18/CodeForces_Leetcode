#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<sstream>
using namespace std;


string simplifyPath(string path){
    
    istringstream iss(path);
    vector<string> v;
    string token;
    
    while(getline(iss,token,'/')){
    	v.push_back(token);
    }
    
    stack<string> s;
    
    for(int i=0;i<v.size();i++){
        if(v[i] == ".." && !s.empty()){
            s.pop();
        }    
        else if(v[i] != ".." && v[i] != "." && v[i]!=""){
            s.push(v[i]);
        }
    }
    
    string str="";
    
    while(!s.empty()){
        string temp = s.top();
        str = temp + str;
        str = "/" + str;
        s.pop();
    }
    
    return str;
}

int main(){
	cout<<simplifyPath("../x/y/c");
	return 0;
}
