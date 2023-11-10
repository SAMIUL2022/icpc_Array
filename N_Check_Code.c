#include <stdio.h>
int main ()
{
int n,m;
scanf("%d %d",&n,&m);
int v=n+m+1;
char x[v];
scanf("%s",x);
int flag=1;
for (int i = 0; i < v; i++)
{
    if (i==n && x[n]!='-')
    {flag=0;
       break;;
}
else 
{if ( i!=n && x[i]<='0'&& x[i]>='9')
{
    flag=0;
 
}}}
 
if (flag==1)
{
    printf("Yes\n");
}
else
printf("No\n");
// printf("%d\n",flag);
    return 0;
}
