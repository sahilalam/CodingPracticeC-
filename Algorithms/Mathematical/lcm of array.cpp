class Solution {
    long long gcd(long long a,long long b)
    {
        if(a==0)
        {
            return b%1000000007;
        }
        return gcd(b%a,a);
    }
    long long lcm(long long a,long long b,long long gcd)
    {
        return ((a/gcd)*b)%1000000007;
    }
  public:
    long long numGame(long long n) {
        if(n==1)
        {
            return 1;
        }
        long long g=gcd(1,2);
        long long l=lcm(1,2,g);
        for(long long i=3;i<=n;i++)
        {
            g=gcd(l,i);
            l=lcm(l,i,g);
        }
        return l;

    }
};
