#include <iostream>
using namespace std;
bool fn(int x,int y,int *a,int n)
{
    while(x<n)
    {
        if(a[x]!=a[y])
        {
            return false;
        }
        x++;
        y=(y+1)%n;
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int **a=new int*[m];
	    for(int i=0;i<m;i++)
	    {
	        a[i]=new int[n];
	    }

	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    int X;
	    cin>>X;
	    X=X%n;
	    bool ans=true;
	    for(int i=0;i<m;i++)
	    {
	        if(i%2==0)
	        {
	            if(!fn(0,X,a[i],n))
	            {
	                ans=false;
	                break;
	            }

	        }
	        else
	        {
	            if(!fn(0,(n-X)%n,a[i],n))
	            {
	                ans=false;
	                break;
	            }
	        }
	    }
	    if(ans)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }

	}
	return 0;
}
