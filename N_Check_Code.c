#include <stdio.h>
#include <string.h>
int main ()
{
int n,m;
scanf("%d %d",&n,&m);
int v=n+m+1;
char x[v];
scanf("%s",x);
int flag=0;
for (int i = 0; i <v; i++)
{
   if (x[i]!='-')
   {
    flag++;
   }
}
//    printf("%c\n%d\n",x[n],flag);
   if (x[n]=='-' && flag==n+m)
   {
    printf("Yes");
   }
   else printf("No");
// printf("%d\n",flag);
    return 0;
}
