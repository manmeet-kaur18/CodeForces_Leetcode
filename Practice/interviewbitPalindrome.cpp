#include<bits/stdc++.h>
using namespace std;
string solve(string A) {
    int i =0;
    int j = A.length()-1;
    
    int count = 0;
    for(int i=0;i<A.length();i++){
        if(A[i] == '9'){
            count++;
        }
    }
    
    if(count == A.length()){
        string str = "1";
            if(A.length()>1){
            for(int i=0;i<A.length()-1;i++){
                str+='0';
            }
        }
        str += '1';
        return str;
    }
    
    int increased = 0;
    
    while(i<=j){
        if(A[i] != A[j]){
            if(int(A[i]) > int(A[j])){
            
                increased = 1;
            }
            else{
                if((j-1) == (i)){
                    A[i] = A[j]; 
                }
            }
            
            A[j] = A[i];
            
        }
        else{
            if(A[i] == '9'){
                if(i!=j){
                    A.erase(A.begin()+i);
                    A.insert(A.begin()+i,'0');
                    A.insert(A.begin()+i,'1');
                    A.erase(A.begin()+j);
                    A.insert(A.begin()+j,'1');
                    A.insert(A.begin()+j,'0');
                }
                else{
                    A.erase(A.begin()+i);
                    A.insert(A.begin()+i,'1');
                    A.insert(A.begin()+i,'0');
                    A.insert(A.begin()+i,'1');
                }
            }
            else{
                    increased = 1;
                    int t = A[i];
                    int f = t+1;
                    A[i] = char(f);
                    A[j] = char(f);
            }
        }
        i++;
        j--;
    }
    return A;
}


int main(){
	string s = "74094882455";
	cout<<solve(s);
	return 0;
}
