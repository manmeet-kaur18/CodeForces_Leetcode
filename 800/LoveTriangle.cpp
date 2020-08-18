#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> v(n + 1);
    for(int i = 1; i <= n; i++)
        cin>>v[i];

    int flag = false;
    for(int i = 1; i <= n; i++)
    {
        int a = i;
        int b = v[a];
        int c = v[b];

        if(a == v[c])
        {
            flag = true;
        }
    }
	if(flag ==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
    return 0;
}

