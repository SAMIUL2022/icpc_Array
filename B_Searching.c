#include <stdio.h>

int sam(int *a, int i, int n,int q) {
    if (i >= n) {
        return -1;
    }
    
    
    
if (a[i]==q)
{
    return i;
   
}
else
return sam(a, i + 1, n,q);
    

    
    
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int q;
    scanf("%d", &q);
   int re= sam(a, 0, n,q);
printf("%d",re);
    return 0;
}
