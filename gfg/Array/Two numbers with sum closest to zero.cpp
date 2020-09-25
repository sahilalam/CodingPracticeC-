class Solution
{
    public:
        int closestToZero (int arr[], int n)
        {
            int ans;
            int ref=INT_MAX;
            sort(arr,arr+n);
            int i=0;int j=n-1;
            while(i<j)
            {
                int tmp=arr[i]+arr[j];
                if(abs(0-tmp)<ref)
                {
                    ref=abs(0-tmp);
                    ans=tmp;
                }
                if(tmp<0)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
            return ans;
        }
};
