//User function template for C++
class Solution{
public:
	vector<int> printUnsorted(int a[], int n) {
	    int s=-1;
	    int e=n;
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            s=i;
	            break;
	        }
	    }
	    if(s==-1)
	    {
	        return {0,0};
	    }
	    for(int j=n-1;j>0;j--)
	    {
	        if(a[j]<a[j-1])
	        {
	            e=j;
	            break;
	        }
	    }
	    int min=INT_MAX;
	    int max=INT_MIN;
	    for(int i=s;i<=e;i++)
	    {
	        if(a[i]<min)
	        {
	            min=a[i];
	        }
	        if(a[i]>max)
	        {
	            max=a[i];
	        }
	    }
	    while(s!=0 && !(min>=a[s-1]))
	    {
	        s=s-1;
	        if(a[s]<min)
	        {
	            min=a[s];
	        }
	    }
	    while(e!=n-1 && !(max<=a[e+1]))
	    {
	        e=e+1;
	        if(a[e]>max)
	        {
	            max=a[e];
	        }
	    }
	    return {s,e};
	}
};
