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
    

    
    int min=INT_MAX;
for (int j = 0; j < n; j++)
    {
       
       if (a[j]<min)
       {
        min=a[j];
       }
       
       
    }
    int fre=0;
    for (int  j = 0; j < n; j++)
    {
      if (a[j]==min)
      {
        fre++;
      }
      
    }
    


  if (fre%2==0)
   {
    printf("Unlucky");
   }
else
{ printf("Lucky");}
   
   

    return 0;
}