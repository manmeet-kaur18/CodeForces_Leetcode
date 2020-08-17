#include <bits/stdc++.h> 
using namespace std; 
  
int check(string s, int k) 
{ 
    for (int i = 0; i < s.length(); i++)
	{
	
		if (s[i] != s[i % k]) 
		{
			cout<<s[i]<<" "<<cout<<s[i%k]<<" "<<i<<" "<<k;
			return false;	
		} 		
	} 
  
    return true; 
} 
  
int countCommonDivisors(string a, string b) 
{ 
    int ct = 0; 
    int n = a.size(), m = b.size(); 
    for (int i = 1; i <= min(n, m); i++) { 
        if (n % i == 0 && m % i == 0) 
  
            if (a.substr(0, i) == b.substr(0, i)) 
  
                if (check(a, i) && check(b, i)) 
                    ct++; 
    } 
    return ct; 
} 
  
int main() 
{ 
    string a;
    string b;
    cin>>a;
    cin>>b;
  
    cout << countCommonDivisors(a, b); 
  
    return 0; 
} 
