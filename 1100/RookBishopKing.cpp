#include<bits/stdc++.h>
using namespace std;

int dxk[]={1,-1,0,0,1,1,-1,-1};
int dyk[]={0,0,1,-1,1,-1,-1,1};
int n;
int a[8][8]={0};

int dxb[] = {-1,1,1,-1};
int dyb[] = {1,1,-1,-1};

int dxr[] = {1,-1,0,0};
int dyr[] = {0,0,1,-1};

int kingcount=0;
int bishopcount=0;
int rookcount=0;
void dfsk(int r,int c,int count,int rf,int cf)
{
	cout<<"enterd"<<"king"<<endl;
    if(r==rf && c==cf){
    	kingcount=count;
    	return;
	}
	if(r==8||c==8){
		return;
	}
	
	a[r][c]=1;
    count++;
    for(int i=0;i<8;i++)
    {
        int x=dxk[i]+r;
        int y=dyk[i]+c;
        
        if(x>0 && y>0 && x<=8 && y<=8 && !a[x][y])
            dfsk(x,y,count,rf,cf);
    }
}


void dfsb(int r,int c,int count,int rf,int cf)
{
	cout<<"enterd"<<"bishop"<<endl;
    if(r==rf && c==cf){
    	bishopcount = count;
    	return;
	}
	if(r==8||c==8){
		return;
	}
	
	a[r][c]=1;
    count++;
    for(int i=0;i<4;i++)
    {
        int x=dxb[i]+r;
        int y=dyb[i]+c;
        
        if(x>0 && y>0 && x<=8 && y<=8 && !a[x][y])
            dfsb(x,y,count,rf,cf);
    }
}


void dfsr(int r,int c,int count,int rf,int cf)
{
	cout<<"enterd"<<endl;
    if(r==rf && c==cf){
		cout<<c<<" "<<r<<" "<<cf<<" "<<rf<<endl;
		cout<<"enterd"<<endl;
    	rookcount = count;
    	return;
	}
	if(r==8||c==8){
		cout<<c<<" "<<r<<" "<<cf<<" "<<rf<<endl;
		cout<<"enterd"<<endl;
		return;
	}
	
	a[r][c]=1;
    count++;
    for(int i=0;i<4;i++)
    {
        int x=dxr[i]+r;
        int y=dyr[i]+c;
        
        if(x>0 && y>0 && x<=8 && y<=8 && !a[x][y])
            dfsr(x,y,count,rf,cf);
    }
}

int main()
{
	int r,c,rf,cf;
	cin>>r>>c>>rf>>cf;
	dfsk(r,c,0,rf,cf);
	dfsb(r,c,0,rf,cf);
	dfsr(r,c,0,rf,cf);
	cout<<rookcount<<" "<<bishopcount<<" "<<kingcount;
	return 0;
}
