// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        int *dp=new int[r+1];
        for(int i=0;i<=r;i++)
        {
            dp[i]=0;
        }
        for(int i=0;i<=n;i++)
        {
            for(int j=min(i,r);j>=0;j--)
            {
                if(j==0 || j==i)
                {
                    dp[j]=1;
                }
                else
                {
                    dp[j]=(dp[j]%1000000007+dp[j-1]%1000000007)%1000000007;
                }
            }
        }
        return dp[r];
    }
};
