void merge(Job* arr,int s1,int e1,int s2,int e2)
{
    Job* tmp=new Job[e2-s1+1];
    int k=0;
    while(s1<=e1 && s2<=e2)
    {
        if(arr[s1].profit>arr[s2].profit)
        {
            tmp[k]=arr[s1];
            s1++;
        }
        else
        {
            tmp[k]=arr[s2];
            s2++;
        }
        k++;
    }
    while(s1<=e1)
    {
        tmp[k]=arr[s1];
        k++;
        s1++;
    }
    while(s2<=e2)
    {
        tmp[k]=arr[s2];
        k++;
        s2++;
    }
    k--;
    while(k>=0)
    {
        arr[e2]=tmp[k];
        k--;
        e2--;
    }
    delete []tmp;
    tmp=NULL;
}
void fn(Job *arr,int i,int j)
{
    if(i>=j)
    {
        return ;
    }
    int mid=(i+j)/2;
    fn(arr,i,mid);
    fn(arr,mid+1,j);
    merge(arr,i,mid,mid+1,j);
}
pair<int,int> JobScheduling(Job arr[], int n)
{

    fn(arr,0,n-1);
    int profit=0;
    int c=0;
    bool *v=new bool[n];
    for(int i=0;i<n;i++)
    {
        v[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=min(arr[i].dead,n)-1;j>=0;j--)
        {
            if(v[j]==false)
            {
                v[j]=true;
                c++;
                profit+=arr[i].profit;
                break;
            }
        }
    }

    return make_pair(c,profit);
}
