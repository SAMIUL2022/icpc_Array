#include <stdio.h>
int main ()
{
int n,m;
scanf("%d %d",&n,&m);

char a[n][m];
getchar();
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <=m; j++)
    {
       scanf("%c",&a[i][j]);
    }
     
}
int x,y;
scanf("%d %d",&x,&y);
//  printf("%c",a[x-1][y-1]);
 int flag=1;
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < m; j++)
    {
      if (a[x-1][y-1]=='x'&& a[i][j]=='x' || a[x-1][y-1]=='.'&&a[i][j]=='x')
      {
        flag=1;
      }
      else flag =0;
    }
    
}

// printf("%d %d",x,y);
if (flag==1)
{
    printf("yes");
    }
else printf("no"); 

    return 0;
}