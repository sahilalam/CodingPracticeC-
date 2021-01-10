void merge(int *start,int *end,int s1,int e1,int s2,int e2)
{
    int* tmp=new int[e2-s1+1];
    int* tmp2=new int[e2-s1+1];
    int k=0;
    while(s1<=e1 && s2<=e2)
    {
        if(end[s1]<end[s2])
        {
            tmp[k]=end[s1];
            tmp2[k]=start[s1];
            s1++;
            k++;
        }
        else
        {
            tmp[k]=end[s2];
            tmp2[k]=start[s2];
            s2++;
            k++;
        }
    }
    while(s1<=e1)
    {
        tmp[k]=end[s1];
        tmp2[k]=start[s1];
        s1++;
        k++;
    }
    while(s2<=e2)
    {
        tmp[k]=end[s2];
        tmp2[k]=start[s2];
        s2++;
        k++;
    }
    k--;
    while(k>=0)
    {
        end[e2]=tmp[k];
        start[e2]=tmp2[k];
        k--;
        e2--;
    }
    delete []tmp;
    tmp=NULL;
    delete []tmp2;
    tmp2=NULL;
}

void fn(int *start,int *end,int i,int j)
{
    if(i>=j)
    {
        return ;
    }
    int mid=(i+j)/2;
    fn(start,end,i,mid);
    fn(start,end,mid+1,j);
    merge(start,end,i,mid,mid+1,j);
}
int maxMeetings(int start[], int end[], int n) {
    fn(start,end,0,n-1);
    int tmp=end[0];
    int ans=1;
    for(int i=1;i<n;i++)
    {
        if(start[i]>tmp)
        {
            ans++;
            tmp=end[i];
        }
    }
    return ans;

}
