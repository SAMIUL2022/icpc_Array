#include <stdio.h>
#include <limits.h>
int main ()
{


int n;
scanf("%d",&n);
int a[n];
    for (int j = 0; j < n; j++)
    {
       scanf("%d",&a[j]);
       
    }
    

    int fre [1001]={0};
for (int j = 0; j < n; j++)
    {
       fre[a[j]]++;
       
    }
for (int j = 0; j < 1001; j++)
    {
       if (fre[j]>0)
       {
       printf("%d-%d\n",j,fre[j]);
       }
       
       
    }

    return 0;
}