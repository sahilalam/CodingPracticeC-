class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            int i=0;
            int j=n-1;
            int d=INT_MAX;
            int sum;
            while(i<j)
            {
                int tmp=arr[i]+arr[j];
                if(abs(tmp)<d)
                {
                    d=abs(tmp);
                    sum=tmp;
                }
                else if(abs(tmp)==d)
                {
                    if(tmp>sum)
                    {
                        sum=tmp;
                    }
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
            return sum;
        }
};
