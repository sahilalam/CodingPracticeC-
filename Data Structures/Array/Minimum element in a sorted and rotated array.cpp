class Solution{
    int fn(int *a,int i,int j,int n)
    {
        if(i>=j)
        {
            if(i>=0 && i<n)
            {
                return a[i];
            }
            if(j>=0 && j<n)
            {
                return a[j];
            }
        }
        int mid=(i+j)/2;
        int ans=a[mid];
        if(a[mid]>a[0])
        {
            ans=min(ans,fn(a,mid+1,j,n));
        }
        else
        {
            ans=min(ans,fn(a,i,mid-1,n));
        }
        return ans;
    }
public:
    int findMin(int arr[], int n){
        if(arr[0]<arr[n-1])
        {
            return arr[0];
        }
        return fn(arr,0,n-1,n);
    }
};
