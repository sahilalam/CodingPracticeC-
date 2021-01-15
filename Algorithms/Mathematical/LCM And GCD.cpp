class Solution {
    long long gcd(long long A,long long B)
    {
        if(A==0)
        {
            return B;
        }
        return gcd(B%A,A);
    }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long g=gcd(A,B);
        long long lcm=(A/g)*B;
        return {lcm,g};
    }
};
