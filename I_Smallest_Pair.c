#include <stdio.h>
#include <limits.h>
int main ()
{
int t;
scanf("%d",&t);
for (int  i = 0; i < t; i++)
{
    int n;
scanf("%d",&n);
int a[n];
    for (int j = 0; j < n; j++)
    {
       scanf("%d",&a[j]);
       
    }
    long long int min=INT_MAX;
for (int j = 0; j < n; j++)
    {
       for (int  k = j+1; k <n ; k++)
       {
        long long int sum=a[j]+a[k]+(k-j);
        if (min>sum)
        {
           min=sum;
        }
        
       }
       
    }
printf("%lld\n",min);
}






    return 0;
}