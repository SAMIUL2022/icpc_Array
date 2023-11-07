#include <stdio.h>

void sam(int *a, int i, int n) {
    if (i >= n) {
        return;
    }
    
    
    
if (a[i]>0)
{
   a[i]=1; 
   printf("%d ",a[i]);
   
}
else if (a[i]<0)
{
    a[i]=2;
    printf("%d ",a[i]);
}
else
{a[i]=0;
    printf("%d ",a[i]);}

 sam(a, i + 1, n);
    

    
    
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    sam(a, 0, n);

    return 0;
}
