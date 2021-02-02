class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int x=0;
        for(int i=0;i<n;i++)
        {
            x=(x^arr[i]);
        }
        for(int i=1;i<=n;i++)
        {
            x=(x^i);
        }
        int a=0;
        int b=0;
        x=(x&(~(x-1)));
        for(int i=0;i<n;i++)
        {
            if(x&arr[i])
            {
                a=(a^arr[i]);
            }
            else
            {
                b=(b^arr[i]);
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(x&i)
            {
                a=(a^i);
            }
            else
            {
                b=(b^i);
            }
        }
        int *ans=new int[2];
        ans[0]=b;
        ans[1]=a;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==a)
            {
                ans[0]=a;
                ans[1]=b;
                return ans;
            }
        }
        return ans;
    }
};
