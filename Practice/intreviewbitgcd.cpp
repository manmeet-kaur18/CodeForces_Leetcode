#include<bits/stdc++.h>
using namespace std;

int findgcd(int A,int B){
    if(B%A == 0){
        return A;
    }
    return findgcd(B%A,A);
}

int gcd(int A, int B) {
    int gcdnum = 0;
    if(A>=B){
        gcdnum = findgcd(A,B);
    }
    else{
        gcdnum = findgcd(B,A);
    }
    return gcdnum;
}

int main(){
	int gcdnum = gcd(4,6);
	cout<<gcdnum;
	return 0;
}
