#include <stdio.h>
#include <stdlib.h>


int main ()
{
int n;
scanf("%d",&n);
int m[n];
long long int sum=0;
while (n--)
{
    scanf("%d",&m[n]);
sum=sum+m[n];
}
long long int re=abs(sum);
printf("%lld",re);


}