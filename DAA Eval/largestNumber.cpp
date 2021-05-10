#include<bits/stdc++.h>
#include<string.h>
using namespace std;

bool comp(int a, int b){
	string x = to_string(a);
	string y = to_string(b);
	return (x+y)>(y+x);
//    stack<int> s1;
//    stack<int> s2;
//    vector<int> v;
//    vector<int> v1;
//    while(a!=0){
//        int temp = a%10;
//        s1.push(temp);
//        a=a/10;
//    }
//    
//    while(!s1.empty()){
//    	v.push_back(s1.top());
//    	s1.pop();
//	}
//	
//    while(b!=0){
//        int temp = b%10;
//        s2.push(temp);
//        b=b/10;
//    }
//    
//    while(!s2.empty()){
//    	v1.push_back(s2.top());
//    	s2.pop();
//	}
//	
//    int i=0,j=0;
//    
//    for(int i=0;i<v.size();i++){
//    	cout<<v[i]<<" ";
//	}
//	cout<<endl;
//    for(int i=0;i<v1.size();i++){
//    	cout<<v1[i]<<" ";
//	}
//	cout<<endl;
//    while(i<v.size() && j<v1.size()){
//        
//        if(v[i]>v1[j]){
//            return true;
//        }
//        
//        else if(v[i] < v1[j]){
//            return false;
//        }
//        
//        i++;
//        j++;
//    }
//    
//    return v.size() > v1.size();
}

string largestNumber(const vector<int> &A) {
    vector<int> B(A);
    sort(B.begin(),B.end(),comp);
    string s;
    for(int i=0;i<B.size();i++){
            ostringstream str1; 
            str1 << B[i]; 
            string geek = str1.str();
            s+=geek;
    }
    return s;
}

int main(){
	int n;
	cin>>n;
	vector<int> A;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		A.push_back(y);
	}
	
	cout<<largestNumber(A)<<endl;
	return 0;
}
