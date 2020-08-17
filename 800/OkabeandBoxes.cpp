#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){

    long n; std::cin >> n; 
    stack<long> st;
    long lastRemoved=0; 
	long count= 0;
    for(long p = 0; p < 2 * n; p++){
        string action; 
		cin >> action;
        if(action[0] == 'a'){
			long x; 
			cin >> x; 
			st.push(x);
		}
        else{
            if(!st.empty()){
                if(st.top() == lastRemoved + 1){
					st.pop();
				}
                else{
				++count; 
				while(!st.empty()){
					st.pop();
				}
				}
            }
            ++lastRemoved;
        }
    }

    cout << count << std::endl;

    return 0;
}
