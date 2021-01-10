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
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=a[i]*i;
            sum+=a[i];
        }
        int tmp=ans;
        for(int i=1;i<n;i++)
        {
            tmp=tmp+(a[i-1]*(n-1))-sum+a[i-1];
            ans=max(ans,tmp);
        }
        cout<<ans<<endl;
    }
    return 0;
}
