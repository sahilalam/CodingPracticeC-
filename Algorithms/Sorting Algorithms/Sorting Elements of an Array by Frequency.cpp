#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(int **b,int s1,int e1,int s2,int e2)
{
    vector<pair<int,int> > p;
    while(s1<=e1 && s2<=e2)
    {
        if(b[s1][1]<b[s2][1])
        {
            p.push_back(make_pair(b[s2][0],b[s2][1]));
            s2++;
        }
        else if(b[s1][1]>b[s2][1])
        {
            p.push_back(make_pair(b[s1][0],b[s1][1]));
            s1++;
        }
        else
        {
            if(b[s1][0]<b[s2][0])
            {
                 p.push_back(make_pair(b[s1][0],b[s1][1]));
                 s1++;
            }
            else
            {
                 p.push_back(make_pair(b[s2][0],b[s2][1]));
                 s2++;
            }
        }
    }
    while(s1<=e1)
    {
         p.push_back(make_pair(b[s1][0],b[s1][1]));
         s1++;
    }
    while(s2<=e2)
    {
         p.push_back(make_pair(b[s2][0],b[s2][1]));
         s2++;
    }
    while(!p.empty())
    {
        b[e2][0]=p[p.size()-1].first;
        b[e2][1]=p[p.size()-1].second;
        e2--;
        p.pop_back();
    }
}

void srt(int **b,int i,int j)
{
    if(i>=j)
    {
        return;
    }
    int mid=(i+j)/2;
    srt(b,i,mid);
    srt(b,mid+1,j);
    merge(b,i,mid,mid+1,j);
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
	    sort(a,a+n);
	    int c=0;
	    int tmp=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=tmp)
	        {
	            c++;
	            tmp=a[i];
	        }
	    }
	    int **b=new int*[c];
	    for(int i=0;i<c;i++)
	    {
	        b[i]=new int[2];
	        b[i][1]=0;
	    }
	    int ind=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(ind==-1)
	        {
	            ind=0;
	            b[ind][0]=a[i];
	            b[ind][1]++;
	        }
	        else
	        {
	            if(a[i]==b[ind][0])
	            {
	                b[ind][1]++;
	            }
	            else
	            {
	                ind++;
	                b[ind][0]=a[i];
	                b[ind][1]++;
	            }
	        }
	    }
	    srt(b,0,c-1);
	    for(int i=0;i<c;i++)
	    {
	        while(b[i][1])
	        {
	            cout<<b[i][0]<<" ";
	            b[i][1]--;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
