#include <iostream>
#include<climits>
using namespace std;

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
        int f=INT_MAX,s=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]<f)
            {
                f=a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<s && a[i]!=f)
            {
                s=a[i];
            }
        }
        if(f==INT_MAX || s==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<f<<" "<<s<<endl;
        }
    }
	return 0;
}
