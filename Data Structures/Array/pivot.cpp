//User function template for C++
class Solution{
    int pivot(int *arr,int i,int j)
    {
        int ind=0;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(arr[mid]<arr[ind])
            {
                ind=mid;
            }
            if(arr[mid]>=arr[0])
            {
                i=mid+1;
            }
            else if(arr[mid]<arr[0])
            {
                j=mid-1;
            }

        }
        return ind;
    }
public:
	int findKRotation(int arr[], int n) {
	    return pivot(arr,0,n-1);
	}

};
