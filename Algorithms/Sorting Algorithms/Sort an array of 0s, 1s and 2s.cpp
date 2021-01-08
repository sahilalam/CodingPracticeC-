
void sort012(int a[], int n)
{
    int z=0;
    int t=n-1;
    for(int i=0;i<=t;)
    {
        if(a[i]==0)
        {
            swap(a[i],a[z]);
            i++;
            z++;
        }
        else if(a[i]==2)
        {

            swap(a[i],a[t]);
            t--;
        }
        else
        {
            i++;
        }
    }
}
