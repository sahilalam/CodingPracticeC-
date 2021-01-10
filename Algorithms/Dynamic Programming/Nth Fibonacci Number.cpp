// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        long long int f=0;
        long long int l=1;
        for(long long int i=0;i<n;i++)
        {
            long long int tmp=(f%1000000007+l%1000000007)%1000000007;
            f=l;
            l=tmp;
        }
        return f;
    }
};
