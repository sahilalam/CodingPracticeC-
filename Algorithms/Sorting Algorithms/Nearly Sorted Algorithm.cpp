
#include <iostream>
#include<queue>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int *a=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    priority_queue<int, vector<int>, greater<int> > pq;
	    for(int i=0;i<=min(n-1,k);i++)
	    {
	        pq.push(a[i]);
	    }
	    int x=0;
	    int i=k+1;
	    while(!pq.empty())
	    {
	        a[x]=pq.top();
	        x++;
	        pq.pop();
	        if(i<n)
	        {
	            pq.push(a[i]);
	            i++;
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
