#include<iostream>
using namespace std;
int main()
{
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
        int i=0;int j=n-1;
        int ans;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(mid-1<0 || mid+1>=n)
            {
                ans=a[mid];
                break;
            }
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            {
                ans=a[mid];
                break;
            }
            if(a[mid+1]>a[mid])
            {
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
