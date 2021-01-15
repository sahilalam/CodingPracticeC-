//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    int neg=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            neg++;
	        }
	    }
	    int pos=(n-neg);
	    int i=0;

	    bool m=true;;
	    if(neg!=pos)
	    {
	        if(neg<pos)
	        {
	            m=false;
	            i=1;
	        }
	    }
	    int *tmp=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        tmp[i]=INT_MIN;
	    }
	    for(int x=0;x<n && i<n;x++)
	    {
	        if(!m && arr[x]<0)
	        {
                tmp[i]=arr[x];
                i=i+2;
	        }
	        else if(m && arr[x]>=0)
	        {
                tmp[i]=arr[x];
                i=i+2;
	        }
	    }
	    if(pos>0)
	    {
	        i=1;
	    }
	    else
	    {
	        i=0;
	    }

	    if(!m)
	    {
	        i=0;
	    }
	    for(int x=0;x<n && i<n;)
	    {
	        if(!m && arr[x]>=0 && tmp[i]==INT_MIN)
	        {
	            tmp[i]=arr[x];
	            x++;i++;
	        }
	        else if(m && arr[x]<0 && tmp[i]==INT_MIN)
	        {
	            tmp[i]=arr[x];
	            x++;i++;
	        }
	        if(tmp[i]!=INT_MIN)
	        {
	            i++;
	        }
	        if(!m && arr[x]<0)
	        {
	            x++;
	        }
	        else if(m && arr[x]>=0)
	        {
	            x++;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=tmp[i];
	    }
	}
};
