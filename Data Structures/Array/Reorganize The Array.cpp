#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int *a=new int[n];
	    int *vti=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        vti[i]=-1;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=-1)
	        {
	            vti[a[i]]=i;
	        }

	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=i)
	        {
	            if(vti[i]!=-1)
	            {
	                int ind=vti[i];
	                swap(a[i],a[ind]);
	                vti[i]=i;
	                vti[a[ind]]=ind;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
