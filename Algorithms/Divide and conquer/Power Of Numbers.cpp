//You need to complete this fucntion

long long power(int N,int R)
{
   if(R==1)
   {
       return N%1000000007;
   }
   if(R%2==0)
   {
       long long tmp=power(N,R/2);
       return (tmp*tmp)%1000000007;
   }
   return (power(N,R-1)*N)%1000000007;

}
