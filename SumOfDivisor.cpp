int sumOfDivisor(int n)
{
    int p = n;
    int tot = 1;

    for(int i=2; i*i<=n; i++)
    {
        int sum = 0;
        if(n%i==0)
        {
            while(n%i==0)
            {
                sum++;
                n/=i;
            }
            tot = tot*(ceil(pow(i,sum+1)-1)/(i-1));
        }
    }
    if(n>1)
    {
        tot = tot*(ceil(pow(n,2)-1)/(n-1));
    }

   return tot;
}
