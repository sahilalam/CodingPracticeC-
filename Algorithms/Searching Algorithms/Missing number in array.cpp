// User function template for C++

int MissingNumber(vector<int>& array, int n) {
    int x=0;
    for(int i=0;i<array.size();i++)
    {
        x=(x^array[i]);
    }
    for(int i=1;i<=n;i++)
    {
        x=(x^i);
    }
    return x;
}
