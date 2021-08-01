#include<bits/stdc++.h>
using namespace std;

string breakPalindrome(string palindrome) {
        
        int i=0;
        int j=palindrome.length()-1;
        int flag = 1;
        
        while(i<=j){
            
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                flag = 0;
                break;
            }
            
            i++;
            j--;
        }
        
        if(flag){
            return "";
        }
        
        return palindrome;
}

int main(){
    string s = "0x71f";   
   	cout << stoi(s,nullptr,16) <<endl;
	return 0;
}
