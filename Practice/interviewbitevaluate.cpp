#include<bits/stdc++.h>
using namespace std;

int evalRPN(vector<string> &A) {
    stack<int> s;
    for(int i=0;i<A.size();i++){
        int n = A[i][0] - '0';
        cout<<n<<endl;
        cout<<"entered"<<endl;
        if(isdigit(n)){
            s.push(n);
        }
        else{
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();
            int ele;
            if(A[i] == "+"){
                ele = y+x;
            }
            else if(A[i] =="-"){
                ele = y-x;
            }
            else if(A[i] == "*"){
                ele = y*x;
            }
            else{
                ele = y/x;
            }
            s.push(ele);
        }
    }
    return s.top();
}

int main(){
	string B[] = { "2","2","/" };
	vector<string> A;
	for(int i=0;i<3;i++){
		A.push_back(B[i]);
	}
	cout<<evalRPN(A);
	return 0;
}
