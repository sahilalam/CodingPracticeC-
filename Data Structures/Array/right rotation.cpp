#include<iostream>
using namespace std;
void rev(int i,int j,int *a)
{
    while(i<=j)
    {
        swap(a[i],a[j]);
        i++;j--;
    }
}
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
        int k;
        cin>>k;
        k=k%n;
        rev(0,n-k-1,a);
        rev(n-k,n-1,a);
        rev(0,n-1,a);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
