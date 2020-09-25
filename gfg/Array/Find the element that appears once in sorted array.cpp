class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int mid=(i+j)/2;
            if(mid%2==0)
            {
                (arr[mid]==arr[mid-1])?j=mid:i=mid;
            }
            else
            {
                (arr[mid]==arr[mid-1])?i=mid+1:j=mid-1;
            }

        }
        return arr[i];
    }
};
