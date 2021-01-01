#include<iostream>
using namespace std;
void rev(int *a,int i,int j)
{
    while(i<=j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int *a=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        d=d%n;
        rev(a,0,d-1);
        rev(a,d,n-1);
        rev(a,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
