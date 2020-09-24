#include<iostream>
using namespace std;
bool checkPrimeNaive(int n)
{
    //Time complexity-O(n)
    if(n==1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool checkPrimeEffecient(int n)
{
    //Time Complexity-O(sqrt(n))
    if(n==1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<checkPrimeEffecient(n)<<endl;
    cout<<checkPrimeNaive(n);
    return 0;
}
