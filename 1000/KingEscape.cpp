#include<bits/stdc++.h>
using namespace std;

int dx[]={1,-1,0,0,1,1,-1,-1};
int dy[]={0,0,1,-1,1,-1,-1,1};
int n;
int a[1000][1000];

void dfs(int r,int c)
{
    a[r][c]=2;
    for(int i=0;i<8;i++)
    {
        int x=dx[i]+r;
        int y=dy[i]+c;
        
        if(x>0 && y>0 && x<=n && y<=n && !a[x][y])
            dfs(x,y);
    }
}

int main()
{
	int i,j,k;
	int m;
	int ax,bx,cx;
	int ay,by,cy;

	cin>>n;
	cin>>ax>>ay; 
	cin>>bx>>by;
	cin>>cx>>cy;
	
	memset(a,1,sizeof(0));
	
	for(i=1;i<=n;i++)
	    a[i][ay]=1, a[ax][i]=1;
	
	i=ax, j=ay;
	while(i<n && j<n)
	{
	    a[i][j]=1;
	    i++;j++;
	}
	
	i=ax, j=ay;
	while(i>0 && j<n)
	{
	    a[i][j]=1;
	    i--;j++;
	}
	
	i=ax, j=ay;
	while(i<n && j>0)
	{
	    a[i][j]=1;
	    i++;j--;
	}
	
	i=ax, j=ay;
	while(i>0 && j>0)
	{
	    a[i][j]=1;
	    i--;j--;
	}
	
	dfs(bx,by);
	
	if(a[cx][cy]==2)
	    cout<<"YES";
	
	else
	    cout<<"NO";
	
	return 0;
}
