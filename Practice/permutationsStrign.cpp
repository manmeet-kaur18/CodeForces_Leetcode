#include<bits/stdc++.h>
using namespace std;

bool shouldSwap(string str, int start, int curr)
{
    for (int i = start; i < curr; i++)
        if (str[i] == str[curr]){
            return 0;
        }
    return 1;
}
 
 
void solve(set<string> &st,string str,int index,int n){
    
    cout<<index<<" "<<n<<endl;
    if (index >= n) {
        
        if(st.find(str)==st.end()){
            st.insert(str);
        }            
        return;
    }
 
    for (int i = index; i < n; i++) {
 
        bool check = shouldSwap(str, index, i);
        if (check) {
            swap(str[index], str[i]);
            solve(st,str, index + 1, n);
            swap(str[index], str[i]);
        }
    }
}

vector<string> findSortedPermutations(string str){
    set<string> st;
    solve(st,str,0,str.length());
    vector<string> res;
    
    set<string>::iterator itr;
    
    for(itr=st.begin(); itr!=st.end();itr++){
        res.push_back(*itr);
    }
    
    return res;
}

int main(){
	string str="abcb";
	vector<string> res=findSortedPermutations(str);
	int n = res.size();
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
	return 0;
}
