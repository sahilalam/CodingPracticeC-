//User function template for C++
class Solution{
    int fn(int *a,int i,int j,int x)
    {
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(a[mid]<x)
            {
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
        return i;
    }

public:
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int s=fn(arr,0,n-1,x);
	    int e=fn(arr,0,n-1,x+1);
	    return e-s;
	}
};
