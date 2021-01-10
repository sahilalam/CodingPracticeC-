//User function template for C++

// n : given integer value
cpp_int findCatalan(int n) {
    cpp_int c=1;
    for(int i=2;i<=n;i++)
    {
        c=c*(4*i-2);
        c=c/(i+1);
    }
    return c;
}
