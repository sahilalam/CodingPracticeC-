// User function Template for C++

class Solution{
    bool fn(int *arr,int n,int i,int sum)
    {
        if(sum<0)
        {
            return false;
        }
        if(sum==0)
        {
            return true;
        }
        if(i==n)
        {
            if(sum==0)
            {
                return true;
            }
            return false;
        }
        if(fn(arr,n,i+1,sum-arr[i]))
        {
            return true;
        }
        return fn(arr,n,i+1,sum);
    }
public:
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
        {
            return 0;
        }
        sum=sum/2;
        return fn(arr,N,0,sum);
    }
};
