// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<bits/stdc++.h>
using namespace std;

bool checkpossiblity(string &S, string &T){
    int x = S.length();
    int y = T.length();
    return abs(x-y)<=1;
}

bool equal(string &S, string &T){
    int i=0;
    int j=0;
    int x = S.length();
    int y = T.length();
    
    while(i<x && j<y){
        if(S[i]!=T[j]){
            return false;
        }
        i+=1;
        j+=1;
    }

    return true;
}

char checkinsert(string &S, string &T){
    int i=0;
    int j=0;
    char inschar = '#';
    int x = S.length();
    int y = T.length();
    
    while(i < x &&  j < y){
//	    cout<<i<<" "<<j<<endl;

        if(S[i]==T[j]){
            i++;
            j++;
        }
        else{
            if(j < y-1){
                if(T[j+1]==S[i]){
                    inschar = T[j];
                    cout<<T[j]<<endl;
                    j+=1;
                    cout<<inschar<<endl;
                    return inschar;
                }
                else{
                    return '#';
                }
            }
            else{
                return '#';
            }
        }
    }
    return inschar;
}

char checkdelete(string &S,string &T){
    int i=0;
    int j=0;
    char delchar = '#';
     int x = S.length();
    int y = T.length();

    while(i<x && j<y){

        if(S[i]==T[j]){
            i++;
            j++;
        }
        else{
            if(i<x-1){
                if(T[j]==S[i+1]){
//                	cout<<i<<" "<<j<<" "<<T[j]<<" "<<S[i]<<endl;
                    delchar = S[i];
                    i+=1;
                    return delchar;
                }
                else{
                    return '#';
                }
            }
            else{
                return '#';
            }
        }
    }

    return delchar;
}



char checkmove(string &S,string &T){
    int i=0;
    int j=0;
    char movchar = '#';
    int x = S.length();
    int y = T.length();

    while(i<x && j<y){
        if(S[i]==T[j]){
            i++;
            j++;
        }
        else{
            if(i < x-1){
                if(T[j]==S[i+1]){
                    if(movchar=='#'){
                        movchar = S[i];
                        cout<<movchar<<endl;
                        i+=1;
                    }
                }
            }
            if(movchar == T[j]){
                return movchar;
            }
        }
    }
    return '#';
}

string solution(string &S, string &T) {
    if(!checkpossiblity(S,T)){
        return "IMPOSSIBLE";
    }
    
    if(equal(S,T)){
        return "NOTHING";
    }

    char c = checkinsert(S,T);

    if(c != '#'){
    	string str = "INSERT ";
    	str+=c;
        return str;
    }
 
    
    
    char c2 = checkmove(S,T);

    if(c2!='#'){
        string str = "MOVE ";
    	str+=c2;
        return str;
    }
    
    char c1 = checkdelete(S,T);
    if(c1 != '#'){
    	string str = "REMOVE ";
    	str+=c1;
    	cout<<str<<endl;
        return str;
    }
    

    return "IMPOSSIBLE";
}


int main(){
	string s="beans";
	string t="banes";
	cout<<solution(s,t);
	return 0;
}
//
//beans
//01234
//banes
//01234

