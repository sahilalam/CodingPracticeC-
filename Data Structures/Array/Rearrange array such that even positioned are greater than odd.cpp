vector<int> assign(int a[], int n)
{
    sort(a,a+n);
    int j=n-1;
    int i=1;
    vector<int> ans(n);
    while(i<n)
    {
        ans[i]=a[j];
        i=i+2;
        j--;
    }
    i=0;
    j=0;
    while(i<n)
    {
        ans[i]=a[j];
        j++;
        i=i+2;
    }

    return ans;
}

