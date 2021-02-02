class Solution{
public:
    int palindromicPartition(string str)
    {
        int n=str.size();
        bool **p=new bool*[n];
        int *c=new int[n];

        for(int i=0;i<n;i++)
        {
            p[i]=new bool[n];
            c[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                p[i][j]=(i==j)?true:false;
            }
        }
        for(int k=1;k<n;k++)
        {
            int i=0;
            int j=k;
            while(i<n && j<n)
            {
                if(j-i==1)
                {
                   p[i][j]=(str[i]==str[j])?true:false;
                }
                else
                {
                    if(p[i+1][j-1] && str[i]==str[j])
                    {
                        p[i][j]=true;
                    }
                    else
                    {
                        p[i][j]=false;
                    }
                }

                i++;j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(p[0][i])
            {
                c[i]=0;
            }
            else
            {
                c[i]=INT_MAX;
                for(int j=0;j<i;j++)
                {
                    if(p[j+1][i] && 1+c[j]<c[i])
                    {
                        c[i]=1+c[j];
                    }
                }
            }
        }
        return c[n-1];

    }
};
