#include <iostream>
using namespace std;

int fn(int *a,int i,int j,int k)
{
    if(i>j)
    {
        return -1;
    }
    int mid=(i+j)/2;
    if(a[mid]==k)
    {
        return mid;
    }
    if(k>a[mid])
    {
        if(k>a[0] && a[mid]<a[0])
        {
            return fn(a,i,mid-1,k);
        }
        return fn(a,mid+1,j,k);

    }
    else
    {

        if(k<a[0] && a[mid]>a[0])
        {
            return fn(a,mid+1,j,k);
        }
        return fn(a,i,mid-1,k);
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int *a=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    cout<<fn(a,0,n-1,k)<<endl;
	}
	return 0;
}
