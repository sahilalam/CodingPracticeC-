#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    int *a=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int ans=0;
	    int i=0;
	    while(i<n)
	    {
	        if(a[i]==0)
	        {
	            ans=-1;
	            break;
	        }
	        int jump1=i+a[i];
	        if(jump1>=n-1)
	        {
	            ans++;
	            break;
	        }
	        int jump2=jump1+a[jump1];
	        if(jump2>=n-1)
	        {
	            ans=ans+2;
	            break;
	        }
	        for(i=i+1;i<jump1;i++)
	        {
	            int tmp=i+a[i];
	            if(tmp>=n-1)
	            {
	                i=n-1;
	                ans=ans+2;
	                break;
	            }
	            if(tmp>jump2)
	            {
	                jump2=tmp;
	            }
	        }
	        if(i>=n-1)
	        {
	            break;
	        }
	        i=jump2;
	        ans=ans+2;
	    }
	    cout<<ans<<endl;

	    t--;
	}
	return 0;
}
