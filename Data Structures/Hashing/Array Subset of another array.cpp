#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int *a=new int[m];
	    int *b=new int[n];
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    if(n>m)
	    {
	        cout<<"No"<<endl;
	    }
	    else
	    {
	        int *freq=new int[100001];
	        for(int i=0;i<=100000;i++)
	        {
	            freq[i]=0;
	        }
	        for(int i=0;i<n;i++)
	        {
	            freq[b[i]]++;
	        }
	        for(int i=0;i<m;i++)
	        {
	            freq[a[i]]--;
	        }
	        int i=0;
	        for(;i<100001;i++)
	        {
	            if(freq[i]>0)
	            {
	                cout<<"No"<<endl;
	                break;
	            }
	        }
	        if(i==100001)
	        {
	            cout<<"Yes"<<endl;
	        }

	    }
	}
	return 0;
}
